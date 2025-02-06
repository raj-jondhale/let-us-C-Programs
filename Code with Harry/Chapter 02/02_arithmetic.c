#include <stdio.h>
int main()
{
    // Operands can be int / float etc.+ -* / are arithmetic operators.
    int a = 40, d = 5;
    int sum = a + d;
    int sub = a - d;
    int mult = a * d;
    int div = a / d;
    int rem = a % d;
    int b = 2, c = 3;
    int z;
    z = b * c; // legal
    printf("The multiplication is %d", z);
    int z;
    b *c = z;      // illegal (not allowed)
    int i = ab;    // invalid
    int i = a * b; // valid
    return 0;
}