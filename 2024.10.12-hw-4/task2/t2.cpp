#include <iostream>


int main(int argc, char* argv[])
{
	int n;
	scanf_s("%d", &n);

	int massiv[1000] = { 0 };

	int answer = 0;
	int indexx = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &massiv[i]);
	}

	int l = 0;
	scanf_s("%d", &l);
	int r = 0;
	scanf_s("%d", &r);

	for (int j = l - 1; j < r; ++j)
	{
		if (massiv[j] > answer){
			answer = massiv[j];
			indexx = j + 1;
		}
		//printf("%d", j);
	}

	printf("\n%d %d", answer, indexx);

	return EXIT_SUCCESS;
}