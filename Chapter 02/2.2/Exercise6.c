#include <stdio.h>
#include <math.h>
int main(){
     printf("Enter the the values of x1 and y1 separated by a space: ");
    double x1, y1;
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the the values of x2 and y2 separated by a space: ");
    double x2, y2;
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the the values of x3 and y3 separated by a space: ");
    double x3, y3;
    scanf("%lf %lf", &x3, &y3);
    printf("Area : %lf\n",fabs(.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))));
    return 0;
}