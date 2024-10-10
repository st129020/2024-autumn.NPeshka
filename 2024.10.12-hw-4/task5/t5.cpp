#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf_s("%d", &n);

    int massiv[10000] = { 0 };

    int prom = 0;

    for (int i = 0; i < n; ++i) {
        scanf_s("%d", &prom);
        massiv[i] = prom;
    }

    int x = 0;
    scanf_s("%d", &x);

    int closest_value = massiv[0];  // Начнем с первого элемента
    int min_diff = abs(x - closest_value);

    for (int i = 1; i < n; ++i) {
        int diff = abs(x - massiv[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_value = massiv[i];
        }
        else if (diff == min_diff && massiv[i] < closest_value) {
            closest_value = massiv[i];
        }
    }

    printf("%d\n", closest_value);

    return 0;
}