#include <stdio.h>
#include <math.h>

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++)
    {
        long long seconds, root, lackings, row, column;
        scanf("%lld", &seconds);
        root = ceil(sqrt(seconds * 1.0));
        lackings = root * root - seconds;
        if (lackings < root){
            row = root;
            column = lackings + 1;
        }
        else{
            column = root;
            row = seconds - (root-1) * (root-1);
        }
        if(root % 2 == 0){
            long long temp = column;
            column = row;
            row = temp;
        }
        printf("Case %d: %lld %lld\n",i, column, row);
    }

    return 0;
}