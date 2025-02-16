#include <stdio.h>
int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            printf("The elment present at index arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}