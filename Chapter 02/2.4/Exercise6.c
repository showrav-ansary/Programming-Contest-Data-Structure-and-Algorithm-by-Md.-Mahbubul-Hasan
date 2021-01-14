#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);

    int j = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int innerTerm = 1;
        for (int k = 1; k <= i; k++){
            for(int l = 1; l <=k; l++)
                innerTerm *= j++;
            sum += innerTerm;
            innerTerm = 1; 
        }
    }
    printf("%d\n", sum);

    return 0;
}