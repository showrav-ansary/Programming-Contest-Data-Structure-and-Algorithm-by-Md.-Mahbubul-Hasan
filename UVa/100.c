#include <stdio.h>

int main()
{
    int i, j;

    while (scanf("%d %d", &i, &j) != EOF)
    {

        int tempI = i;
        int tempJ = j;

        if (i > j)
        {
            int temp = i;
            i = j;
            j = temp;
        }

        int maxLength = 0;
        int currentLength;

        while (i <= j)
        {
            unsigned int n = i;
            currentLength = 1;

            while (n != 1)
            {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n /= 2;
                currentLength++;
            }

            if (currentLength > maxLength)
                maxLength = currentLength;

            i++;
        }

        printf("%d %d %d\n", tempI, tempJ, maxLength);
    }

    return 0;
}