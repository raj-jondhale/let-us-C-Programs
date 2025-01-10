/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees. */

#include<stdio.h>

int main(){
    float fah, cent;
    printf("Enter a temp in fahrenheit : ");
    scanf("%f", &fah);
    cent = ((fah - 32 ) * 5)/9;

    printf("Temperature in farehnheit : %f \n", fah);
    printf("Temperature in centigrade : %f \n", cent);

    return 0;
}