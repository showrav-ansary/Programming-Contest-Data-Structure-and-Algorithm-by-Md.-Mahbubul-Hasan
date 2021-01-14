#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the the values of x1 : ");
    double x1;
    scanf("%lf",&x1);
    printf("Enter the the values of x2 : ");
    double x2;
    scanf("%lf",&x2);
    if(x1>x2)
        printf("%lf is greater!\n",x1);
    else
        printf("%lf is greater!\n",x2);    
    return 0;
}