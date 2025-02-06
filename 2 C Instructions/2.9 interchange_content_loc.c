// Program to interchange the contents of two locations
#include <stdio.h>

int main()
{
    int C, D, temp;
    printf("Enter two numbers (C and D): ");
    scanf("%d %d", &C, &D);

    temp = C;
    C = D;
    D = temp;

    printf("After interchange: C = %d, D = %d\n", C, D);
    return 0;
}
