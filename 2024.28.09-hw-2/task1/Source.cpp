#include <cstdio>;
#include <math.h>

int main(int argc, char* argv[])
{

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d", &a, &b);
    scanf_s("%d %d", &c, &d);
    if (a == c)
    {
        printf("YES");
    }
    else if (b == d)
    {
        printf("YES");
    }
    else if (abs(c - a) == abs(b - d))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
}