#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter the the values of x1 : ");
    double x1;
    scanf("%lf", &x1);
    printf("Enter the the values of x2 : ");
    double x2;
    scanf("%lf", &x2);
    printf("Enter the the values of x3 : ");
    double x3;
    scanf("%lf", &x3);
    if (x1 > x2 && x1 > x3)
        printf("%lf is greater!\n", x1);
    else if (x2 > x3)
        printf("%lf is greater!\n", x2);
    else
        printf("%lf is greater!\n", x3);
    return 0;
}