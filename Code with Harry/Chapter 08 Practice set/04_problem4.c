#include <stdio.h>

char *slice(char arr[], int m, int n)
{
    char *ptr1 = &arr[m];
    char *ptr2 = &arr[n];

    arr = ptr1;
    arr[n] = '\0';
    return arr;
}
int main()
{
    char arr[] = "Jay shri Ram";
    printf("%s", slice(arr, 1, 5));
    return 0;
}