#include<cstdio>

int main(int argc, char* argv[])
{
	int k = 0;
	scanf_s("%d", &k);

	for (int b = 0; b < k; ++b)
	{
		int n = 0;
		int m = 0;
		scanf_s("%d %d", &n, &m);

		int d = 19 * m + (n + 239) * (n + 366) / 2;
		printf("%d\n", d);
	}
	return 0;
}