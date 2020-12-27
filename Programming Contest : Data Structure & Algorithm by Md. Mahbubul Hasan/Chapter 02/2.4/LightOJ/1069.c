#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int p1, p2;
        scanf("%d %d", &p1, &p2);
        printf("Case %d: %d\n", i, 4 * (p1 + (int)fabs(p1 - p2)) + 19);
    }
    return 0;
}