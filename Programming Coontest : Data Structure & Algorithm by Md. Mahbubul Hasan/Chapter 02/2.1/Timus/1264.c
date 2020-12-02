#include <stdio.h>

int main()
{
    int operand1, operand2;
    scanf("%d %d", &operand1, &operand2);
    printf("%d\n", operand1*(++operand2));
    return 0;
}