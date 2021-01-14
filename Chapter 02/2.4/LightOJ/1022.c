#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    double pi = 2.0 * acos(0.0);
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        double r;
        scanf("%lf", &r);
        double area = (4 * r * r) - (pi * r * r);
        printf("Case %d: %.2lf\n", i, area);
    }
    return 0;
}