#include <stdio.h>
int main()
{
    int i = 10;
    int *j = &i;

    printf("The address of variable  i is %u\n", &i);
    printf("The value of variable  i is %d\n", *j);
    return 0;
}