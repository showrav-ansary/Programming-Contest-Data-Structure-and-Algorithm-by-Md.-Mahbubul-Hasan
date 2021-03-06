# LOJ 1294 - Positive Negative Sign #
---
Given two integers: _n_ and _m_ and _n_ is divisible by _2m_, you have to first write down the first n natural numbers in the following form:

   - At first take first m integers and make their sign negative
   - Then take next m integers and make their sign positive
   - The next m integers should have negative signs and continue this procedure until all the n integers have been assigned a sign.

For example, let n be 12 and m be 3. Then we have -1 - 2 - 3 + 4 + 5 + 6 - 7 - 8 - 9 + 10 + 11 + 12. If n = 4 and m = 1, then we have -1 +2 -3 + 4.

Now your task is to find the summation of the numbers considering their signs.

### Input

Input starts with an integer _T (≤ 10000)_, denoting the number of test cases.Each case starts with a line containing two integers: _n_ and _m_ _(2 ≤ n ≤ 10<sup>9</9>, 1 ≤ m)_. And you can assume that _n_ is divisible by _2*m_.


### Output

For each case, print the case number and the summation separated by a space.

## Solution

The problem statement has confirmed that `n = 2*m`. Which means that the series is __always possible__ to be split up in _pairs_. Let's observe the `series` for example of `n = 12` and `m = 3` :
```
Series  = - 1 - 2 - 3 + 4 + 5 + 6 - 7 - 8 - 9 + 10 + 11 + 12
        = (4-1) + (5-2) + (6-3) + (10-7) + (11-8) + (12-9)
        = 3 + 3 + 3 + 3 + 3 + 3
        = 3 * 6
        = 18
```
In the above observation, we can see that each pair produced _3_ and here `3 = m`. More clearly, `i-th positive number` + `i-th negative number` = `m`. Examples: 1st positive number is `4` and 1st negative number is `-1` and `4 + (-1) = 3`. And since the problem has stated that `n = 2*m`, we are sure to find a `i-th postive number` for a corresponding `i-th negative number`. Also, _3_ has occured _6_ times where, `6 = 12/2 = n/2`. So, the `sum = 18 = 6*3 = (n/2)*m`.

__Caution__ : Remember, we need `long` or similar data type that can hold integer values more than 10<sup>9</sup> because even if `n` and `m` alone does not need any data type more than 10<sup>9</sup>, but `n*m` does!

The above implementation is `accepted`.

## Solution in C

```c
#include <stdio.h>
int main()
{
    int t;
    long n, m, sum;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld %ld", &n, &m);
        sum = (n / 2) * m;
        printf("Case %d: %ld\n", i, sum);
    }
    return 0;
}
```