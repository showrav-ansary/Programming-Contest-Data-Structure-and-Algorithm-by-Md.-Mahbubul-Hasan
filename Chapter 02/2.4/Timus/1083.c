
#include <stdio.h>
int main()
{
    char marks[20];
    int n;
    scanf("%d%s", &n, marks);
    int k = strlen(marks);
    int result = 1;
    if (k >= n)
        result = n;
    else{
        int sum = 1;
        for(int i = 0; (n-i*k) > 0 ;i++ ){
            sum *=(n-i*k);
        }
        result = sum;
    }
    printf("%d", result);
    return 0;
}
