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


We are given the __deaccelaration__ and __velocity__ of both the trains. If we divide the __velocity__ by __deaccelaration__, `t = v/a`, we can obtain the __time__, __t__, taken by each individual train to stop. The __flight time__ of the bird (_when the trains noticed one another and pulled break_) will be __maximum__ between these two trains because the bird could not fly any longer than the collision time and the collision time depends on the train that took longest to stop. Now we only need to plug into `d = v * t`, and get __d<sub>bird</sub>, the distance covered by the bird. And for the total distance covererd by trains we just need to _sum_ the distance covered by each individual trains, __d<sub>train</sub> = 1/2 * a<sub>train</sub> * t<sup>2</sup> and then __d</sub>total</sub> = d<sub>train 1</sub> + d<sub>train 2</sub>.

