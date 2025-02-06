// Program to calculate the sum of the digits of a five - digit number
#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);
    return 0;
}
