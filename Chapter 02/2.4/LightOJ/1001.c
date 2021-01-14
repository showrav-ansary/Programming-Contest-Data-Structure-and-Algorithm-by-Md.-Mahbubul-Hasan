#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        int m = ceil(k / 2.0);
        int n = floor(k / 2.0);
        printf("%d %d\n", m, n);
    }
    return 0;
}