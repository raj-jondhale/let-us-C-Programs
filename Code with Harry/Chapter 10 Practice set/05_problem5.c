#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("int.txt", "r");

    fscanf(ptr, "%d", &num);
    // fprintfs
    fclose(ptr);

    ptr = fopen("int.txt", "w");

    fprintf(ptr, "%d", num * 2);
    fclose(ptr);
    return 0;
}