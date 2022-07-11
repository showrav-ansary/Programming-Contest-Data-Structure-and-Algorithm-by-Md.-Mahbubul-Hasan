#include <stdio.h>
#include <math.h>

int Prime[15000], nPrime;
int mark[1048576];

int main()
{

    int limit = sqrt(1048576) + 2;
    mark[0] = 1;

    for (int i = 4; i < 1048576; i += 2)
        mark[i] = 1;

    Prime[nPrime++] = 2;

    for (int i = 3; i < 1048576; i += 2)
    {
        if (nPrime == 15000)
            break;
        if (!mark[i])
        {
            Prime[nPrime++] = i;
            if (i <= limit)
                for (int j = i * i; j < 1048576; j += i * 2)
                    mark[j] = 1;
        }
    }
    int k;
    scanf("%d", &k);
    int num;
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &num);
        printf("%d\n", Prime[num - 1]);
    }
    return 0;
}
