#include<cstdio>

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return gcd(b, a % b);
}

int main(int argc, char* argv[])
{
	int n = 0, m = 0;

	scanf_s("%d %d", &n, &m);

	if (m % n == 0)
	{
		printf("1");
	}
	else {
		printf("%d", n / gcd(n, m));
	}

	return 0;
}