#include <stdio.h>

int main(){
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    printf("%d\n", n*(n*n*n+2*n*n+3*n+2)/8);
    return 0;
}