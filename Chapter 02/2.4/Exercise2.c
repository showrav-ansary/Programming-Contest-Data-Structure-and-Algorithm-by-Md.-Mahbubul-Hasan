#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int iterator = 1; iterator <= n; iterator++)
        sum += iterator*iterator;
    printf("%d\n", sum);
    /*
    formula solution : printf("%d\n", n*(n+1)*(2n+1)/6)
    */
    return 0;
}