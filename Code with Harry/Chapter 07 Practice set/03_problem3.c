#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    printf("The table of %d is :\n", n);

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d\n", arr[i]);
    }

    return 0;
}