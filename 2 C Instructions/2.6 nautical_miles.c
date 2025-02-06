// Program to calculate distance in nautical miles between two points
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
#define R 3963 // Radius of the Earth in nautical miles

double toRadians(double degree)
{
    return degree * (PI / 180.0);
}

int main()
{
    double L1, L2, G1, G2, D;
    printf("Enter latitude (L1, L2) and longitude (G1, G2) in degrees: ");
    scanf("%lf %lf %lf %lf", &L1, &L2, &G1, &G2);

    L1 = toRadians(L1);
    L2 = toRadians(L2);
    G1 = toRadians(G1);
    G2 = toRadians(G2);

    D = R * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
    printf("Distance in nautical miles: %.2lf\n", D);
    return 0;
}
