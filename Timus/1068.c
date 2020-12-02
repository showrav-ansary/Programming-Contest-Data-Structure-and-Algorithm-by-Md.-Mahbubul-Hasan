#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (fabs(n) <= 10000)
        if (n >= 0)
            printf("%d",n*(n+1)/2);
        else
            printf("%d",(2-n)*(n+1)/2);
}