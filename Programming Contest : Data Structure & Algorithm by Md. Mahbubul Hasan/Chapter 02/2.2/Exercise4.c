#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the the value r: ");
    double r;
    scanf("%lf", &r);
    printf("The area is : %lf\n", 2*M_PI*r);
    return 0;
}