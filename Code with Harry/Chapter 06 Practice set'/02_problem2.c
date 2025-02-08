#include <stdio.h>
void fun(int *ptr)
{
    printf("The value of ptr is %p\n", ptr);
    printf("The value of ptr is %d\n", *ptr);
}

int main()
{
    int i = 10;
    int *ptr = &i;
    printf("The address of i is %p\n", &i);
    fun(ptr);
    return 0;
}