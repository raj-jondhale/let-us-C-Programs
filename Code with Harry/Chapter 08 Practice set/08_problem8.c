#include <stdio.h>
#include <string.h>

int main()
{
    char s = 'a';
    char str[10];
    int count = 0;

    printf("Enter String:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == s)
        {
            count++;
        }
    }

    printf("Count is %d\n", count);
    return 0;
}
