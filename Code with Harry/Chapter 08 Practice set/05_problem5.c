#include <stdio.h>

int strlen(char source[])
{
    int count;
    int i = 0;
    char c = source[i];
    while (c != '\0')
    {
        c = source[i];
        i++;
    }
    count = i - 1;
    return count;
}

void strcpy1(char target[], char source[])
{
    for (int i = 0; i < strlen(source); i++)
    {
        target[i] = source[i];
    }
    target[strlen(source)] = '\0';
}

int main()
{
    char source[] = "Harry";
    char target[20];
    strcpy1(target, source);
    printf("%s %s ", source, target);
    printf("%d", strlen(source));
    return 0;
}