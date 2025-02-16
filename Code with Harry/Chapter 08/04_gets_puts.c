#include <stdio.h>
int main()
{
    char st[30];
    gets(st);
    printf("%s", st);
    // we can also use puts,it give cursor to the next line
    puts(st);
    return 0;
}