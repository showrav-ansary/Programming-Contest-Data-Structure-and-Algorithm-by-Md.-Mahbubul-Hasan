#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    int sign = 1;
    for (int iterator = 1; iterator <= n; iterator++)
    {
        sum += iterator * sign;
        sign *= -1;
    }
    /*
    no loop solution:
    if(n%2 == 0)
        printf("%d", ceil(-n/2.0));
    else
        printf("%d", ceil(n/2.0));    
    */
    printf("%d\n", sum);
    return 0;
}