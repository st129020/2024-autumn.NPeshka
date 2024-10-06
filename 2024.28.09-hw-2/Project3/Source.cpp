
#include <cstdio>;
#include <math.h>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;

    scanf_s("%d %d %d", &x1, &y1, &r1);
    scanf_s("%d %d %d", &x2, &y2, &r2);
    if (x1 == x2 and y1 == y2 and r1 == r2)
    {
        printf("YES\n");
    }
    else if (x1 == x2 and y1 == y2 and (r1 > r2 or r1 < r2))
    {
        printf("NO\n");
    }
    else if (sqrt((((x1 - x2),2) + ((y1 - y2), 2))) < abs(r1 - r2))
    {
        printf("NO\n");
    }
    else if ((r1 + r2 == sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) or (r1 + r2 > sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))))
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}