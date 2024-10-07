#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int b = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int a = 0;
			scanf_s("%d", &a);

			if (a == 1)
			{
				b += 1;
			}
			else
			{
				continue;
			}
		}
	}
	printf("%d", b / 2);
	return 0;
}