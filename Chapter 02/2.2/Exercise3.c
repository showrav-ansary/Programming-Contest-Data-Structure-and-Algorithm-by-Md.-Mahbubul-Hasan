#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the the values a, b and c separated by a space: ");
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);   
    double s = (a+b+c)/2; 
    printf("Area : %lf", sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}