#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter a non-negative number : ");
    double number;
    scanf("%lf", &number);
    printf("Closet integer to the square root of %lf is : %lf\n",number,round(sqrt(number)));
    return 0;
}