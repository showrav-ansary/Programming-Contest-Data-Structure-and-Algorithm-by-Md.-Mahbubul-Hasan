#include <stdio.h>

int main()
{
    int harry, larry, total;
    scanf("%d %d", &harry, &larry);
    total = harry + larry - 1;
    printf("%d %d\n", (total-harry),(total-larry));
    return 0;
}