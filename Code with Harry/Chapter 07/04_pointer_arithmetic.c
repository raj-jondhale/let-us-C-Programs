#include <stdio.h>
int main()
{
    // pointer for int
    // int a = 5;
    // int *ptr = &a;

    // printf("the value of adderss is %u \n", &a);
    // printf("The value of address  is %u\n", ptr);
    // ptr++;
    // printf("The value is changed %u\n", ptr);
    // return 0;

    // pointer for char
    char a = 'A';
    char *ptr = &a;

    printf("the value of adderss is %u \n", &a);
    printf("The value of address  is %u\n", ptr);
    ptr++;
    printf("The value is changed %u\n", ptr);
    return 0;
}