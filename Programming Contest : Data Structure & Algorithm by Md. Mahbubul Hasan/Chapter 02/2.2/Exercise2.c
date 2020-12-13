#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the the values a, b and c separated by a space: ");
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);    
    printf("Angle A : %lf rad\n", acos((b*b+c*c-a*a)/(2*b*c)));
    printf("Angle B : %lf rad\n", acos((-b*b+c*c+a*a)/(2*a*c)));
    printf("Angle C : %lf rad\n", acos((b*b-c*c+a*a)/(2*b*a)));
    return 0;
}