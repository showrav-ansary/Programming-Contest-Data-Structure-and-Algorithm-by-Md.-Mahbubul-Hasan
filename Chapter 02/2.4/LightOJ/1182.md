# LOJ 1182 - Parity

---
Given an integer n, first we represent in binary. Then we count the number of ones. We say n has odd parity if the number of one's is odd. Otherwise we say n has even parity.

For example, 21 = (10101)2 has odd parity since the number of one's is 3. 6 = (110)2 has even parity.

Now you are given n, we have to say whether n has even or odd parity.

### Input

Input starts with an integer T (≤ 1000), denoting the number of test cases.

Each case contains an integer n (1 ≤ n < 231).

### Output

For each case, print the case number and odd if n has odd parity, otherwise print even.

## Solution

There are many language specific built-in methods/functions to count parity bits. To solve this problem, we can use __Brian Kernighan's Algorithm__ if we don't want to use any kind of built-in function to count number of set bits.
The algorithm suggests to keep doing `&` operation with the integer's binary representation with it's previous integer's binary representation until the binary representation becomes 0. The number of times of iteration it takes to reach 0 is the set bit count.

Example :

Let, N = 21 = 10101

|N|N-1|N && (N-1)|Iteration|
|---|---|---|---|
|10101|10100|10100|1|
|10100|10011|10000|2|
|10000|01111|00000|3|

So, number of set bits present in 21 is 3. And then we can verify if the 1s present in the binary respresentation is odd or even.

### Java

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        
        int testCases = in.nextInt();
        for (int testCase = 1; testCase <= testCases; testCase++){
            int iteration = 0;
            int number = in.nextInt();
            while (number != 0){
                number = number & (number-1);
                iteration++;
            }
            System.out.println("Case " + testCase + ": " + (iteration % 2 == 0 ? "even" : "odd"));
        }
    }
}
```
