#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i)
	{
		scanf_s("%d", &b);
		if (b > 0)
		{
			c += 1;
		}
		else
		{
			c = 0;
		}
		if (c > d)
		{
			d = c;
		}
	}
	printf("%d", d);
	return 0;
}