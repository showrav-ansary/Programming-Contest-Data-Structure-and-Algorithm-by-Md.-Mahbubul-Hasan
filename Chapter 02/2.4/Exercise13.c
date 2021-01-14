#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    printf("Enter the value of x for 0 <= x <= Pi/2 : ");
    double x;
    scanf("%lf", &x);
    int sign = 1;
    long double sum = 0;
    for (int i = 0; i <= n; i++)
    {
        int factorial = 1;
        for (int j = 2*i; j > 0; j--)
            factorial *= j;
        sum += sign * (pow(x,2*i)/factorial);
        sign *= -1;
    }
    printf("%Lf",sum);

    return 0;
}