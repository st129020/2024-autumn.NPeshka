#include <iostream>
#include <algorithm>


int main(int argc, char* argv[])
{
	int n;
	scanf_s("%d", &n);
	int massiv[10000] = { 0 };
	int prom = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &prom);
		massiv[i] = prom;
	}
	int max_berry = massiv[0] + massiv[1] + massiv[2];
	int tipo_max_berry = max_berry;
	for (int i = 2; i < (n - 1); ++i)
	{
		tipo_max_berry = tipo_max_berry - massiv[i - 2] + massiv[i + 1];
			if (max_berry < tipo_max_berry)
			{
				max_berry = tipo_max_berry;
			}
	}

	printf("%d", max_berry);

	return EXIT_SUCCESS;
}