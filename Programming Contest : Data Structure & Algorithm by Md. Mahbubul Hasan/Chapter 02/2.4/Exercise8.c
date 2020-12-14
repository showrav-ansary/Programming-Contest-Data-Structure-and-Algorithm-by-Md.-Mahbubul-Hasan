#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);

    //pattern 1
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
            printf("*");
        for (int l = n - i; l > 0; l--)
            printf(".");
        printf("\n");
    }
    printf("\n");

    //pattern 2
    for (int i = n; i > 0; i--)
    {
        for (int l = n - i; l > 0; l--)
            printf(".");
        for (int k = 1; k <= i; k++)
            printf("*");

        printf("\n");
    }
    printf("\n");

    //pattern 3
    for (int i = 1; i <= n; i++)
    {
        for (int l = n - i; l > 0; l--)
            printf(".");
        for (int k = 1; k <= i; k++)
            printf("*");
        for (int k = 1; k < i; k++)
            printf("*");
        for (int l = n - i; l > 0; l--)
            printf(".");
        printf("\n");
    }

    //
    printf("\n");

    return 0;
}