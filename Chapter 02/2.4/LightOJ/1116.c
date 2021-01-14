#include <stdio.h>

int main()
{
    int t;
    long n, m, w;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld", &w);
        if (w % 2 == 0)
        {
            n = w / 2;
            m = 2;
            while (n % 2 == 0)
            {
                n /= 2;
                m *= 2;
            }
            printf("Case %d: %ld %ld\n", i, n, m);
        }
        else
            printf("Case %d: Impossible\n", i);
    }
    return 0;
}