#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	int m = 0;

	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 != 0) {
			std::cout << *(a + i) << ' ';
			--m;
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 0) {
			std::cout << *(a + i) << ' ';
			++m;
		}
	}
	std::cout << std::endl;
	if (m >= 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	free(a);

	return 0;
}