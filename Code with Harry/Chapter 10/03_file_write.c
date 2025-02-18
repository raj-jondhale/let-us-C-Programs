#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("james.txt", "w");
    int num = 467;

    fprintf(fptr, "%d", num);

    fclose(fptr);
    return 0;
}