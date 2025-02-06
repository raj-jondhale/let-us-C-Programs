// Program to calculate wind - chill factor(wcf)
#include <stdio.h>
#include <math.h>

int main()
{
    double t, v, wcf;
    printf("Enter the temperature (t in °F) and wind velocity (v in mph): ");
    scanf("%lf %lf", &t, &v);

    wcf = 35.74 + (0.6215 * t) + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind-chill factor (wcf): %.2lf\n", wcf);
    return 0;
}
