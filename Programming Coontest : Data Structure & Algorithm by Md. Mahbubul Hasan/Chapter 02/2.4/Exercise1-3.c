#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int iterator = 1; iterator <= n; iterator++)
        sum += pow(iterator, iterator);
    printf("%d\n", sum);
    return 0;
}