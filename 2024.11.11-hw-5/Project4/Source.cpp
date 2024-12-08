#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	int summ = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > 0) {
			summ += *(a + i);
		}
	}

	int maxx = 0;
	int minn = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > *(a + maxx)) {
			maxx = i;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (*(a + i) < *(a + minn)) {
			minn = i;
		}
	}

	int c = 0;
	int k = 0;
	if (maxx > minn) {
		c = maxx - minn;
		k = minn;
	}
	else {
		c = minn - maxx;
		k = maxx;
	}
	++k;
	--c;
	int s = 1;
	for (int i = k; i < k + c; ++i) {
		s = s * *(a + i);
	}
	std::cout << summ << ' ' << s;

	free(a);

	return 0;
}