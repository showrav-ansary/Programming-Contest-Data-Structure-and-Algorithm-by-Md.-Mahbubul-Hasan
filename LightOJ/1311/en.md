# LOJ 1311 - Unlucky Bird
---
A bird was flying on a train line, singing and passing lazy times. After a while it saw a train coming from its behind, so, it speeded up a bit, but remained calm. After a while, it saw another train coming towards it from the front side. The bird remained calm thinking that the train coming towards him would be on another line. But it realized soon after that both the trains were on the same line!

So, the stupid-brave bird made a plan to stop the accident. It flew towards the train which was coming from the front side, and after touching the train the bird turned back immediately and flew back until it could touch the other train. And after that, it turned back and continued this procedure. The birds' intention was to signal the drivers such that they could stop the train.

When the trains were d meter way, the drivers realized the abnormal behavior of the strange bird and saw the opposite trains, and both drivers braked hard! They were able to stop the collision, but they managed to stop in front of each other leaving no space. A thousand lives saved, but the bird couldn't save itself!

For simplicity, we denote the train (that was behind the bird) as the left train and the other one as the right train. The left train had velocity v<sub>1</sub> m/s (meter per second) and the right train had velocity v<sub>2</sub> m/s and they saw each other when they were __d__ meter away. The driver in the left train made a deceleration of a<sub>1</sub> m/s<sup>2</sup> and the driver in the right train made a deceleration of a<sub>2</sub> m/s<sup>2</sup>. And the trains just avoided the collision. That means they just stopped when their distance was 0 meter. The bird had a constant velocity of v<sub>3</sub> m/s. And assume that the bird can turn immediately and can keep its constant velocity. When the trains were d meter away, the bird was somewhere between the trains. Your task is to find the distance covered by the brave bird (from this moment) in meters before sacrificing its life for the thousand lives.


### Input

Input starts with an integer __T (≤ 100)__, denoting the number of test cases.

Each case starts with a line containing five positive real numbers: __v<sub>1</sub> v<sub>2</sub> v<sub>3</sub> a<sub>1</sub> a<sub>2</sub> (v<sub>1</sub> < v<sub>3</sub>, v<sub>2</sub> < v<sub>3</sub>)__. No real number will be greater than 1000. And no number contains more than three digits after the decimal point.


### Output

For each case, print the case number, __d__ and the distance covered by the bird. Errors less than 10<sup>-6</sup> will be ignored.

## Solution


We are given the __deaccelaration__ and __velocity__ of both the trains. If we divide the __velocity__ by __deaccelaration__, __t<sub>train</sub> = v<sub>train</sub>/a<sub>train</sub>__, we can obtain the __time__, __t<sub>train</sub>__, taken by each individual train to stop. The __flight time__ of the bird (_when the trains noticed one another and pulled break_) will be  the __maximum__ between these two trains because the bird could not fly any shorter duration than the collision time or else it would live and could easily fly away from the tracks. The bird died in between the trains, meaning that it kept flying until the train that took longer to stop had finally killed it. Now we only need to plug into __d<sub>bird</sub> = v<sub>bird</sub> * t<sub>bird</sub>__, and get __d<sub>bird</sub>__, the distance covered by the bird. And for the total distance covererd by trains we just need to __sum__ the distance covered by each individual trains, __d<sub>train</sub> = v<sub>train</sub> * t<sub>train</sub> - 1/2 * a<sub>train</sub> * t<sup>2</sup>__ and then __d</sub>total</sub> = d<sub>train 1</sub> + d<sub>train 2</sub>__.

The above implementation is `accepted`.

## Solution in C
```c
#include <stdio.h>

int main(){
    int testCase;
    scanf("%d", &testCase);
    double v1,v2,v3,a1,a2,t1,t2,t3, bird, trains;
    for(int i = 1; i <= testCase; i++){
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        t1 = v1/a1;
        t2 = v2/a2;
        t3 = t1;
        if(t1 < t2)
            t3 = t2;
        bird = v3 * t3;
        trains = v1 * t1 - .5 * a1 * t1 * t1;
        trains += v2 * t2 - .5 * a2 * t2 * t2;
        printf("Case %d: %.10lf %.10lf\n", i, trains, bird);

    }
    return 0;
}
```

