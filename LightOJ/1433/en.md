# LOJ 1433 - Minimum Arc Distance
---
You all probably know how to calculate the distance between two points in two dimensional cartesian plane. But in this problem you have to find the minimum arc distance between two points and they are on a circle centered at another point.

You will be given the _co-ordinates_ of the points __A__ and __B__ and _co-ordinate_ of the center __O__. You just have to calculate the minimum _arc distance_ between __A__ and __B__. In the picture, you have to calculate the _length_ of _arc_ __ACB__. You can assume that __A__ and __B__ will always be on the circle centered at __O__.

<p align = "center"><img src="problem-1433.png"></p>

### Input

Input starts with an integer _T (≤ 100)_, denoting the number of test cases.

Each case starts with a line containing six integers O<sub>x</sub>, O<sub>y</sub>, A<sub>x</sub>, A<sub>y</sub>, B<sub>x</sub>, By where (O<sub>x</sub>, O<sub>y</sub>) indicates the co-ordinate of O, (A<sub>x</sub>, A<sub>y</sub>) denote the co-ordinate of A and (B<sub>x</sub>, B<sub>y</sub>) denote the co-ordinate of B. All the integers will lie in the range [1, 10000].

### Output

For each case, print the case number and the minimum arc distance. Errors less than 10<sup>-3</sup> will be ignored.

## Solution

To solve it, we first must remember the formula to calculate the [arc length](https://en.wikipedia.org/wiki/Arc_length "arc length") between 2 points of a __circle__, which is 
```
arc length = (radius of the circle) * (angle created by the 2 points at the center of the circle, in radian)
```

To understand this formula in a quick look or refresh our memories, we can see that the _arc length_ is proportional to the __θ__,_angle created at the center of a circle_. The bigger the _arc length_, the bigger becomes the _angle_ in between the 2 points of the cirlce and vice versa. We can see that the __Circumference__ is the longest arc length of a circle also we know __C = 2 * π * (radius of the cirlce)__. 
```
C is the arc length when θ = 2 * π
1 is the arc length when θ = (2 * π)/C
                           = (2 * π)/(2 * π *r)
                           = 1/r
S is the arc length when θ = S/r

So, S = θ * r
```

We can calculate the radius of the circle simply by taking the length of any _point of a circle_ to its _center_, __radius = √((A<sub>x</sub> - O<sub>x</sub>)² + (B<sub>y</sub> - B<sub>y</sub>)²)__.

Now to calculate the _angle_ we can use the _dot product formula of vectors_ for simplicity,
```md
    A.B  = |A||B|cosθ
 => cosθ = A.B / (|A||B|)
 => θ = arccos(A.B / (|A||B|))
      = arccos((((A<sub>x</sub>.O<sub>x</sub>))((A<sub>y</sub>.O<sub>y</sub>)))/(√(A<sub>x</sub>² + A<sub>y</sub>²))(√(O<sub>x</sub>² + O<sub>y</sub>²)))
```
Now we have the necessary values and we can plug into the formula.

The above implementation is `accepted`.

## Solution in C
```c

```