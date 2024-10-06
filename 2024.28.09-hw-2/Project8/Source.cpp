#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if ((a == 1) || (b == 1))
	{
		printf("%d", a * b * 4);
	}
	else if (((a % 2) == 0) || ((b % 2) == 0))
	{
		printf("%d", (a + 1) * b + (b + 1) * a + a + b);
	}
	else
	{
		printf("%d", (a + 1) * b + (b + 1) * a + a + b - 2);
	}
	return 0;
}