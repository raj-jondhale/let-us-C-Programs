/*If lengths of three sides of a triangle are input through the keyboard,
write a program to find the area of the triangle. */
#include <stdio.h>
#include <math.h> /* for sqrt( ) */
int main()
{
    float a, b, c, sp, area;
    printf("\nEnter sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    sp = (a + b + c) / 2;
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    printf("Area of triangle = %f\n", area);
    return 0;
}