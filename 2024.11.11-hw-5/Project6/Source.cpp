#include<iostream>

void sort(int arr[], int l) {
	for (int i = 1; i < l; i++) {
		int j = i - 1;
		while (j >= 0 && *(arr + j) > *(arr + j + 1)) {
			std::swap(*(arr + j), *(arr + j + 1));
			j--;
		}
	}
}

int main(int argc, char* arg[]) {
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int* b = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m; ++i) {
		scanf_s("%d", b + i);
	}

	sort(a, n);
	sort(b, m);


	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (*(a + i) == *(b + j)) {
				if ((*(a + i) != *(a + i + 1)) && (*(b + j) != *(b + j + 1))) {
					std::cout << *(a + i) << ' ';
				}
			}
		}
	}

	free(a);
	free(b);

	return 0;
}