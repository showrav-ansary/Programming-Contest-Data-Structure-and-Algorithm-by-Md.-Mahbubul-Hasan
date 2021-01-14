#include <stdio.h>

int main(void)
{
    int cases;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        int m, n, knights = 0;
        scanf("%d %d", &m, &n);

        int max = n;
        if (m > n)
            max = m;
            
        if (m == 1 || n == 1)
            knights = max;
        else if (m == 2 || n == 2)
        {
            knights = (max / 4) * 4;

            if (max % 4 == 1)
            {
                knights += 2;
            }
            else if (max % 4 > 1)
            {
                knights += 4;
            }
        }
        else
        {
            knights = ((m * n) + 1) / 2;
        }

        printf("Case %d: %d\n", i + 1, knights);
    }
}