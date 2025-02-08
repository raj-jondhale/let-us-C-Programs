#include <stdio.h>

void change_value(int *i)
{
    *i = *i * 10;
}

int main()
{
    int i = 30;
    printf("The value before multiplying is %d\n", i);
    change_value(&i);
    printf("The value after multiplying is %d", i);
    return 0;
}