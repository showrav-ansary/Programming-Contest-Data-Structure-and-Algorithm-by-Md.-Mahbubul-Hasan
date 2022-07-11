#include <stdio.h>

long long countNumbers(int n)
{
    if (n == 0)
        return 0;
    int divisibles;
    if (n % 3 == 0)
    {
        divisibles = n / 3;
    }
    else
    {
        divisibles = (n / 3) + 1;
    }
    return n - divisibles;
}

int main()
{
    int cases;
    long long A, B;
    scanf("%d", &cases);
    for (int test = 1; test <= cases; test++)
    {
        scanf("%lld %lld", &A, &B);
        long long result = countNumbers(B) - countNumbers(A - 1);
        printf("Case %d: %lld\n", test, result);
    }
}