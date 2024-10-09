#include <iostream>

int main(int argc, char* argv[])
{
	int n;
	scanf_s("%d", &n);

	int massiv[10000] = { 0 };

	int answer = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &massiv[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	for (int j = 0; j < n; j++)
	{
		if (massiv[j] == x) {
			answer++;
		}
	}

	printf("%d", answer);

	return EXIT_SUCCESS;
}