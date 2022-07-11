#include <stdio.h>
int main()
{
    int t;
    long n, m, sum;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld %ld", &n, &m);
        sum = (n / 2) * m;
        printf("Case %d: %ld\n", i, sum);
    }
    return 0;
}