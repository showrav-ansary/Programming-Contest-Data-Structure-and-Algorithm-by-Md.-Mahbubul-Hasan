#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the the values of x1 and y1 separated by a space: ");
    double x1, y1;
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the the values of x2 and y2 separated by a space: ");
    double x2, y2;
    scanf("%lf %lf", &x2, &y2);
    printf("The distance is : %lf",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
    return 0;
}