#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    /*
    formula solution : printf("%d\n", n * (n * n * n + 2 * n * n + 3 * n + 2) / 8);
    */
    int j = 1;
    int sum = 0;
    for(int i = 1; i<=n; i++)
        for(int k = 1; k <=i; k++)
            sum += j++;
    printf("%d\n", sum);
    
    return 0;
}