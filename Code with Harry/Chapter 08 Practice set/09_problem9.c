#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Character '%c' is present in the string.\n", ch);
    else
        printf("Character '%c' is not present in the string.\n", ch);

    return 0;
}
