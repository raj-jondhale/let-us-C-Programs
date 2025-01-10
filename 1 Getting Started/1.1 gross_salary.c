/* Problem 1.1
Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary. */
#include<stdio.h>
int main(){
    float bp, hra, da, grpay;

    printf("\nEnter a salary of Ramesh\n");
    scanf("%f", &bp);

    da = 0.4 * bp;
    hra = 0.2*bp;

    grpay = bp + da + hra;

    printf("basic salary of Ramesh= %f\n", bp);
    printf("dearness allowance= %f\n", da);
    printf("house rent allowance= %f\n", hra);
    printf("gross pay of ramesh= %f\n", grpay);
    return 0;
}