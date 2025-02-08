#include <stdio.h>

int sum(int *a, int *b)
{
    *a = 10;
    return *a + *b;
}

int main()
{
    int x = 6, y = 4;

    printf("The sum is %d\n", sum(&x, &y));
    printf("The value of x is changed %d", x);
    return 0;
}