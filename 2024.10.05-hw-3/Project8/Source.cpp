#include<cstdio>
#include<cmath>

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return gcd(b, a % b);
}

int fib(int n)
{
	int a = 0, b = 1, c = 0;
	for (int k = n; k > 0; --k)
	{
		a = b;
		b = c;
		c = (a + b) % 1000000000;
	}

	return c;
}

int main(int argc, char* argv[])
{
	int i = 0, j = 0;
	scanf_s("%d %d", &i, &j);
	printf("%d", fib(abs(gcd(i, j))));

	return 0;
}