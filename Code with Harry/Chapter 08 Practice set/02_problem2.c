#include <stdio.h>
int main()
{
    char st[3];
    char st1[10];
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &st[i]);
        fflush(stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c", st[i]);
    }
    printf("\n");

    gets(st1);
    printf("%s", st1);
    return 0;
}