#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1, e2;
    printf("Enter code: \n");
    scanf("%d", &e1.code);
    printf("Enter salary: \n");
    scanf("%f", &e1.salary);
    printf("Enter name: \n");
    scanf("%s", &e1.name);
    printf("values are %d %.2f %s", e1.code, e1.salary, e1.name);
    return 0;
}