#include <stdio.h>
int main()
{
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter Breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);
    return 0;
}