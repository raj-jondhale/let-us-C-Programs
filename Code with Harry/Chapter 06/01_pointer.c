#include <stdio.h>
int main()
{
    int i = 36;
    int *j = &i;

    printf("The address of variable i is %p \n", &i);
    printf("The address of variable i is %p \n", j);
    printf("The address of j is %p \n", &j);
    printf("The value at address j is %d\n", *(&i));
    return 0;
}