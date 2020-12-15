#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int divisor = 0;
    for(int i = 1; i <= n; i++)
        if(n%i == 0)
            divisor++;
    if(divisor == 2)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}