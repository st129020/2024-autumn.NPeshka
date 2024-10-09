#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
	int n;
	scanf_s("%d", &n);

	int massiv[1000] = { 0 };

	/*int answer = 0;
	int indexx = 0;*/

	int prom = 0;
	int minn = 1000;
	int maxx = 0;


	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &prom);
		massiv[i] = prom;
		minn = std::min(minn, prom);
		maxx = std::max(maxx, prom);
	}

	for (int i = 0; i < n; i++)
	{ 
		if (massiv[i] == maxx) {
			massiv[i] = minn;
		}
		printf("%d ", massiv[i]);
	}

	//printf("\n%d %d", answer, indexx);

	return EXIT_SUCCESS;
}