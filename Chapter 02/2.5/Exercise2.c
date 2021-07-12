#include <stdio.h>
#include <math.h>

int main(){
    printf("Please enter size of the binary array\n" );
    int size;
    scanf("%d", &size);
    int array[size];

    int result = 0;

    printf("Input the binary digits separated by a space\n" );
    for(int i = 0; i < size;i++)
        scanf("%d", &array[i]);

    int power = 0;
    for(int i = size - 1; i >= 0; i--, power++)
        result += array[i] * pow(2,power);

    printf("The decimal number is : %d\n", result);

    return 0;
}
