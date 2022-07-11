#include <stdio.h>

int main()
{
    printf("Enter the the values of x and y separated by a space: ");
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (x >= 0)
    {
        if (y >= 0)
            printf("First\n");
        else
            printf("Fourth\n");
    }
    else
    {
        if (y >= 0)
            printf("Second\n");
        else
            printf("Third\n");
    }

    return 0;
}