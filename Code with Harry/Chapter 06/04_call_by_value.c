#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 6, y = 4;

    printf("The sum is %d", sum(x, y));
    return 0;
}