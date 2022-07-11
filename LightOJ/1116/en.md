# LOJ 1116 - Ekka Dokka #
---
Ekka and his friend Dokka decided to buy a cake. They both love cakes and that's why they want to share the cake after buying it. As the name suggested that Ekka is very fond of odd numbers and Dokka is very fond of even numbers, they want to divide the cake such that Ekka gets a share of __N__ square centimeters and Dokka gets a share of __M__ square centimeters where __N is odd and M is even. Both N and M are positive integers.__

They want to divide the cake such that `N * M = W`, where W is the dashing factor set by them. Now you know their dashing factor, you have to find whether they can buy the desired cake or not.

### Input ###

Input starts with an integer _T (≤ 10000)_, denoting the number of test cases.

Each case contains an integer _W (2 ≤ W < 2<sup>63</sup>)_. And W will not be a power of 2.

### Output ###

For each case, print the case number first. After that print `Impossible` if they can't buy their desired cake. If they can buy such a cake, you have to print `N` and `M`. __If there are multiple solutions, then print the result where M is as small as possible__

## Solution ##

This is just a simple implementation problem. First we have to determine wether `W` is `even` or `odd` simply by checking `W % 2 = 0 or not`. If `W is odd`, we already realize that it is `Impossible` for such `N` and `M` to exist. But when it is not, there can be both single or multiple solutions such that `N * M = W`. For example: if `W = 10`, the only solution is `N = 5` and `M = 2`. But in case of `W = 12`, `(N,M) = {(6,2),(3,4)}`. Now there are 2 conditions:

 1. N must be odd. M must be even.
 2. M must be as small as possible.

 Focusing on `Condition 2`, the equation can be solved as `(X/a)*(Y*a) = W` where to make `a` as small as possible so that `M` becomes not bigger than necessary as well as `(X/a)` becomes an `odd` number just like in case of `W = 12`. As we can see, `(N,M) = (6,2)`, here `M` is smaller than `4` but `N` is not odd. So, we will divide `M` by 2 and multiply that 2 to `N`, making `M = 3` an odd number and `N = 4` an even number. Furthermore dividing will make `M` bigger than necessary. To solve it, we will keep assigning `N = N/2` until it is an `odd` number and we will be also assigning `M = M*2`.

 Remember, you need `long` data type or similar data type that can hold an integer value of _2<sup>63</sup>_

 The above implementation is `accepted`.  

## Solution in C ##

```c
#include <stdio.h>

int main()
{
    int t;
    long n, m, w;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%ld", &w);
        if (w % 2 == 0)
        {
            n = w / 2;
            m = 2;
            while (n % 2 == 0)
            {
                n /= 2;
                m *= 2;
            }
            printf("Case %d: %ld %ld\n", i, n, m);
        }
        else
            printf("Case %d: Impossible\n", i);
    }
    return 0;
}
```