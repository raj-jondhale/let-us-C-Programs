/* The distance between two cities (in kilometers) is input through the
keyboard. Write a program to convert and print this distance in meters,
feet, inches and centimeters.  */ 
#include<stdio.h>

int main(){
    float km, m, cm, inch, ft;

    printf("Enter a distance in KM\n");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;

    printf("Distance in m = %f\n", m);
    printf("Distance in cm = %f\n", cm);
    printf("Distance in inch = %f\n", inch);
    printf("Distance in ft = %f\n", ft);

    return 0;
}