#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int sum = a + b + c;
            int divisor = sum / 9;
            if ((sum % 9 == 0) && a >= divisor && b >= divisor && c >= divisor)
                printf("YES\n");
            else
                printf("NO\n");
    }
    return 0;
}