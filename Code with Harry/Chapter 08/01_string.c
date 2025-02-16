#include <stdio.h>
int main()
{
    // char st[] = {'A', 'B', 'C'};
    char st[] = "ABC"; // same as doing char above

    for (int i = 0; i < 3; i++)
    {
        printf("character is %c \n", st[i]);
    }
    return 0;
}