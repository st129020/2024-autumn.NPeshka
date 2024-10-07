#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int d = 0;

	if (a >= b)
	{
		d == a;
	}
	else
	{
		d == b;
	}

	for (int c = d; c <= a * b; ++c)
	{
		if (a == b)
		{
			printf("%d", a);
			return 0;
		}
		else if (c % a == 0 and c % b == 0)
		{
			printf("%d", c);
			return 0;
		}
		else
		{
			continue;
		}
	}
	return 0;
}  