#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int result = 1;
    for (int i = n; i > 0; i--)
        result *= i;

    printf("%d", result);

    return 0;
}