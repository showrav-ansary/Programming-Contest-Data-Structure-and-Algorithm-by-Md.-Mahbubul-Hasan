//Sieve's Algorithm has been explained in the next chapter. Follow that!
#include <stdio.h>
#include <math.h>

int Prime[15001], nPrime;
int mark[(15001 * 15001)];

int main()
{

    int limit = sqrt(15001 * 1.0) + 2;
    mark[0] = 1;

    for (int i = 4; i <= 15001; i += 2)
        mark[i] = 1;

    Prime[nPrime++] = 2;

    for (int i = 3; i <= 15001; i += 2)
    {
        if (nPrime == 2500)
            break;
        if (!mark[i])
        {
            Prime[nPrime++] = i;
            if (i <= limit)
                for (int j = i * i; j <= 15001; j += i * 2)
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
