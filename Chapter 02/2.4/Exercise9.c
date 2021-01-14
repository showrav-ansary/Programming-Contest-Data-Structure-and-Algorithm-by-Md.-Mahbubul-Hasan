#include <stdio.h>

int main()
{
    printf("Enter the value of n : ");
    long long n, currentPalindromeNo = 1;
    scanf("%lld", &n);
    long long currentlyConsidering = 1;
    while (currentPalindromeNo != n)
    {
        long long workingWith = currentlyConsidering;
        long long reversed = 0;
        while (workingWith != 0)
        {
            reversed = reversed * 10;
            reversed = reversed + workingWith % 10;
            workingWith = workingWith / 10;
        }
        if(currentlyConsidering == reversed)
            currentPalindromeNo++;
        currentlyConsidering++;
    }
    printf("%d", currentlyConsidering-1);
    return 0;
}