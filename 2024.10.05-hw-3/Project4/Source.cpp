#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int b = -1;
	int c = 0;

	for (int a = 0; a < n; ++a)
	{
		int v = 0;
		int s = 0;
		scanf_s("%d %d", &v, &s);
		if (s == 1 and v > b)
		{
			b = v;
			c = a + 1;
		}
		else
		{
			continue;
		}
	}
	if (c == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", c);
	} 
	return 0;
}