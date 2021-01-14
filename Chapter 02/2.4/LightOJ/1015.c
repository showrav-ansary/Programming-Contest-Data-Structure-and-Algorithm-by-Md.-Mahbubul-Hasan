#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            int value;
            scanf("%d", &value);
            if (value > 0)
                sum += value;
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}