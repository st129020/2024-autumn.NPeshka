#include <cstdio>;
#include <math.h>

int main(int argc, char* argv[])
{

    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    if (a == 1 and b == 1)
    {
        printf("0");
    }
    else if (a != b or a==1 or b==1)
    {
        printf("1");
    }
    else
    {
        printf("2");
    }

    return 0;
}