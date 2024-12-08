#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	int maxx = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > maxx) {
			maxx = *(a + i);
		}
	}

	int summ = 0;
	int len = 1;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) == maxx) {
			summ += (len * *(a + i));
			len = 0;
			maxx = 0;
			for (int j = i + 1; j < n; ++j) {
				if (*(a + j) > maxx) {
					maxx = *(a + j);
				}
			}
		}
		++len;
	}
	std::cout << summ;

	free(a);

	return 0;
}