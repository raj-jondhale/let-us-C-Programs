/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle. */

#include<stdio.h>

int main(){
    float len, bre, red,area_rect,peri_rect,area_circle,cirum_circle;
    printf("Enter length and breadth for rectangle: ");
    scanf("%f%f", &len, &bre);
    printf("Enter radius of circle: ");
    scanf("%f", &red);
    area_rect = len * bre;
    peri_rect = 2 * (len + bre);

    area_circle = 3.14 * red * red;
    cirum_circle = 2 * 3.14 * red;

    printf("Area and Perimeter of rectangle is %f & %f\n", area_rect, peri_rect);
    printf("Area and Circumference of circle is %f & %f\n", area_circle, cirum_circle);

    return 0;
}