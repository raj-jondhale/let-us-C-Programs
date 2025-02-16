#include <stdio.h>
int main()
{
    int marks[] = {10, 30, 40};

    int *ptr = &marks[0];
    for (int i = 0; i < 3; i++)
    {
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}