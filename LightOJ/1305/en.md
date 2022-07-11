# LOJ 1305 - Area of a Parallelogram
A parallelogram is a quadrilateral with two pairs of parallel sides. See the picture below:

<p align = "center"><img src="1305problem.png"></p>

Now you are given the co ordinates of __A__, __B__ and __C__, you have to find the coordinates of __D__ and the area of the parallelogram. The orientation of __ABCD__ should be same as in the picture.


### Input

Input starts with an integer _T (≤ 1000)_, denoting the number of test cases.

Each case starts with a line containing six integers __A<sub>x</sub>, A<sub>y</sub>, B<sub>x</sub>, B<sub>y</sub>, C<sub>x</sub>, C<sub>y</sub>__ where __(A<sub>x</sub>, A<sub>y</sub>)__ denotes the coordinate of __A__, __(B<sub>x</sub>, B<sub>y</sub>)__ denotes the coordinate of __B__ and __(C<sub>x</sub>, C<sub>y</sub>)__ denotes the coordinate of __C__. Value of any coordinate lies in the range __[-1000, 1000]__. And you can assume that __A__, __B__ and __C__ will not be collinear.


### Output

For each case, print the case number and three integers where the first two should be the coordinate of __D__ and the third one should be the area of the parallelogram. 

## Solution

Since, it's a __parallelogram__, 
```
    AB = CD
=>  Bx - Ax = Cx - Dx
=>  Dx = Ax + Cx - Bx
```
Similarly, __D<sub>y</sub> = A<sub>y</sub> + C<sub>y</sub> - B<sub>y</sub>__.


We know that the area of a __Parallelogram__, 

<p align = "center"><img src="Formula.png"></p>


Simply __A = 1/2 * (((A<sub>x</sub>*B<sub>y</sub>)+(B<sub>x</sub>*C<sub>y</sub>)+(C<sub>x</sub>*D<sub>y</sub>)+(D<sub>x</sub>*A<sub>y</sub>))-((A<sub>y</sub>*B<sub>x</sub>)+(B<sub>y</sub>*C<sub>x</sub>)+(C<sub>y</sub>*D<sub>x</sub>)+(D<sub>y</sub>*A<sub>x</sub>)))__

We have to assign `A = A * -1` in case `A` comes in negative.

If we now just simply plugin the values, we have all the answer now.

The above implementation is `accepted`.

## Solution in C
```c
#include <stdio.h>

int main()
{
    int t, ax, ay, bx, by, cx, cy, dx, dy, a;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = ax + cx - bx;
        dy = ay + cy - by;
        a = 0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax)));
        if (a < 0)
            a *= -1;
        printf("Case %d: %d %d %d\n", i, dx, dy, a);
    }
    return 0;
}
```
