#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    printf("Enter the value of r : ");
    int r;
    scanf("%d", &r);
    int resultN = 1;
    int resultR = 1;
    int resultNminusR = 1;
    for(int i = 1; i <=n; i++){
        resultN *= i;
        if(i <= r)
            resultR *= i;
        if(i <= (n-r))
            resultNminusR *= i;
    }
    printf("%d\n", resultN/(resultR*resultNminusR));

    return 0;
}