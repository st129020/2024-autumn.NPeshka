#include <cstdio>;
#include <math.h>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);

    printf("%f %f", - b + sqrt ( b * b - 4 * a * c ), -b + sqrt(b * b - 4 * a * c))

    return 0;
}