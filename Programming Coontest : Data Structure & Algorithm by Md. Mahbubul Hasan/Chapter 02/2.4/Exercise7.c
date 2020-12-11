#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int sum = 0;
    int j = n;
    for (int i = 1; i <= n; i++)
    {
        sum += j * i;
        j--; 
    }
    printf("%d\n", sum);
    
    /*
    formula solution: printf("%d\n", (n*n*n+3*n*n+2*n)/6);
    */

    return 0;
}