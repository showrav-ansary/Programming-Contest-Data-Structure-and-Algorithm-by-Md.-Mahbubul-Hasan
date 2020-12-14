#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    printf("\n");

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
    printf("\n");
    //pattern 4
    for (int i = n; i > 0; i--)
    {

        for (int k = n - i; k > 0; k--)
            printf(".");
        for (int l = 1; l <= i; l++)
            printf("%d", l);
        for (int k = i - 1; k > 0; k--)
            printf("%d", k);
        for (int k = n - i; k > 0; k--)
            printf(".");
        printf("\n");
    }

    printf("\n");

    //pattern 5
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
    for (int i = n - 1; i > 0; i--)
    {

        for (int k = n - i; k > 0; k--)
            printf(".");
        for (int l = 1; l <= i; l++)
            printf("*");
        for (int k = i - 1; k > 0; k--)
            printf("*");
        for (int k = n - i; k > 0; k--)
            printf(".");
        printf("\n");
    }
    printf("\n");

    //pattern 6

    for (int i = 1; i < n; i++)
    {
        for (int l = n - i; l > 0; l--)
            printf(".");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int k = 1; k < i; k++)
            printf("%d", k);
        for (int l = n - i; l > 0; l--)
            printf(".");
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {

        for (int k = n - i; k > 0; k--)
            printf(".");
        for (int l = 1; l <= i; l++)
            printf("%d", l);
        for (int k = i - 1; k > 0; k--)
            printf("%d", k);
        for (int k = n - i; k > 0; k--)
            printf(".");
        printf("\n");
    }

    printf("\n");

    printf("\n");

    return 0;
}