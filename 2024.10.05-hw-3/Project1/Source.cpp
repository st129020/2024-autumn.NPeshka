#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int a = 0;
	for (int b = 0; b <= n; ++b)
	{
		int c = 0;
		scanf_s("%d", &c);
		if (c == 1)
		{
			a = a + 1;
		}
	}
	if (n - a >= a)
	{
		printf("%d", a);

	}
	else
	{
		printf("%d", n - a);
	}
	return 0;
}