// Program to calculate all trigonometric ratios of an angle
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main()
{
    double angle, radians;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    radians = angle * (PI / 180.0); // Convert to radians
    printf("sin(%.2lf) = %.2lf\n", angle, sin(radians));
    printf("cos(%.2lf) = %.2lf\n", angle, cos(radians));
    printf("tan(%.2lf) = %.2lf\n", angle, tan(radians));
    return 0;
}
