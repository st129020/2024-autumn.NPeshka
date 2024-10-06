#include <stdio.h>
#include <cmath>

int main(int argc, char* argv[])
{
    int k = 0;
    int w = 0;
    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    int a3 = 0;
    int b3 = 0;
    scanf_s("%d %d", &k, &w);
    scanf_s("%d %d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);

    if (k <= (a1 + a2 + a3) and w <= (b1 + b2 + b3))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;

}