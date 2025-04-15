#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <cstdlib>

class ArrayList {
private:
    size_t capacity;
    size_t size;
    int* data;

    void expand(size_t new_capacity = 0) {
        if (new_capacity == 0) {
            new_capacity = (capacity == 0) ? 1 : capacity * 2;
        }


        int* new_data = static_cast<int*>(malloc(sizeof(int) * new_capacity));
        if (!new_data) {
            throw std::bad_alloc();
        }

        for (size_t i = 0; i < size; ++i) {
            new_data[i] = data[i];
        }

        free(data);
        data = new_data;
        capacity = new_capacity;
    }

    void check_index(size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
    }

public:
    ArrayList(size_t initial_capacity = 10) : capacity(initial_capacity), size(0) {
        if (capacity == 0) capacity = 1;
        data = static_cast<int*>(malloc(sizeof(int) * capacity));
        if (!data) throw std::bad_alloc();
        for (size_t i = 0; i < capacity; ++i) {
            data[i] = 0;
        }
    }

    ArrayList(const ArrayList& other) : capacity(other.capacity), size(other.size) {
        data = static_cast<int*>(malloc(sizeof(int) * capacity));
        if (!data) throw std::bad_alloc();
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    ArrayList& operator=(const ArrayList& other) {
        if (this != &other) {
            free(data);
            capacity = other.capacity;
            size = other.size;
            data = static_cast<int*>(malloc(sizeof(int) * capacity));
            if (!data) throw std::bad_alloc();
            for (size_t i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    ~ArrayList() {
        free(data);
    }

    void push_back(int value) {
        if (size == capacity) {
            expand();
        }
        data[size++] = value;
    }

    void push_front(int value) {
        insert(0, value);
    }

    void insert(size_t index, int value) {
        if (index > size) {
            throw std::out_of_range("Insert index out of range");
        }

        if (size == capacity) {
            expand();
        }

        for (size_t i = size; i > index; --i) {
            data[i] = data[i - 1];
        }
        data[index] = value;
        ++size;
    }

    int pop_back() {
        if (size == 0) {
            throw std::out_of_range("Cannot pop from empty list");
        }
        return data[--size];
    }

    int pop_front() {
        if (size == 0) {
            throw std::out_of_range("Cannot pop from empty list");
        }
        int value = data[0];
        for (size_t i = 0; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --size;
        return value;
    }

    int erase(size_t index) {
        check_index(index);
        int value = data[index];
        for (size_t i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --size;
        return value;
    }

    int& operator[](size_t index) {
        check_index(index);
        return data[index];
    }

    const int& operator[](size_t index) const {
        check_index(index);
        return data[index];
    }

    int at(size_t index) const {
        check_index(index);
        return data[index];
    }

    size_t length() const { return size; }
    bool empty() const { return size == 0; }

    void clear() {
        size = 0;
    }

    void resize(size_t new_size) {
        if (new_size > capacity) {
            expand(new_size);
        }
        size = new_size;
    }

    void reverse() {
        for (size_t i = 0; i < size / 2; ++i) {
            std::swap(data[i], data[size - 1 - i]);
        }
    }

    int find(int value) const {
        for (size_t i = 0; i < size; ++i) {
            if (data[i] == value) {
                return i;
            }
        }
        return -1;
    }

    int max() const {
        if (size == 0) {
            throw std::logic_error("Empty list has no maximum");
        }
        int max_val = data[0];
        for (size_t i = 1; i < size; ++i) {
            if (data[i] > max_val) {
                max_val = data[i];
            }
        }
        return max_val;
    }

    int min() const {
        if (size == 0) {
            throw std::logic_error("Empty list has no minimum");
        }
        int min_val = data[0];
        for (size_t i = 1; i < size; ++i) {
            if (data[i] < min_val) {
                min_val = data[i];
            }
        }
        return min_val;
    }

    friend std::ostream& operator<<(std::ostream& os, const ArrayList& list) {
        os << "[";
        for (size_t i = 0; i < list.size; ++i) {
            if (i != 0) os << ", ";
            os << list.data[i];
        }
        os << "]";
        return os;
    }
};

int main() {
    try {
        ArrayList list(5);

        for (int i = 1; i <= 10; ++i) {
            list.push_back(i * 10);
        }

        std::cout << "List: " << list << std::endl;
        std::cout << "Length: " << list.length() << std::endl;

        list.insert(2, 999);
        std::cout << "After insert: " << list << std::endl;

        std::cout << "Popped back: " << list.pop_back() << std::endl;
        std::cout << "Popped front: " << list.pop_front() << std::endl;
        std::cout << "After pops: " << list << std::endl;

        list[0] = -1;
        std::cout << "Modified first element: " << list << std::endl;

        list.reverse();
        std::cout << "Reversed: " << list << std::endl;

        int val = 50;
        int idx = list.find(val);
        if (idx != -1) {
            std::cout << "Found " << val << " at index " << idx << std::endl;
        }
        else {
            std::cout << val << " not found" << std::endl;
        }

        std::cout << "Min: " << list.min() << ", Max: " << list.max() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}