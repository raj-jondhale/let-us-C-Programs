// (b) Program to convert Cartesian coordinates(x, y)
// to polar coordinates(r, φ)
#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, r, phi;
    printf("Enter Cartesian coordinates (x, y): ");
    scanf("%lf %lf", &x, &y);

    r = sqrt(x * x + y * y);
    phi = atan2(y, x); // Use atan2 to handle quadrant cases

    printf("Polar coordinates: r = %.2lf, φ = %.2lf radians\n", r, phi);
    return 0;
}
