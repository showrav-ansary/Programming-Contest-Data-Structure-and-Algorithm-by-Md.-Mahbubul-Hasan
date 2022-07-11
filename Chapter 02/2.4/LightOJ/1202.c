#include <stdio.h>
#include <math.h>
int main()
{
    int cases, c1, r1, c2, r2, c, r;
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
        c = abs(c1 - c2);
        r = abs(r1 - r2);
        if (c == r)
            printf("Case %d: 1\n", i);
        else
        {
            if (c % 2 == r % 2)
                printf("Case %d: 2\n", i);
            else
                printf("Case %d: impossible\n", i);
        }
    }
    return 0;
}