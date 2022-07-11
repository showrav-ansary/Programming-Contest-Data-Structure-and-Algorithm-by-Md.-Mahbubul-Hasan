import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Stack;

public class Timus1001 {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        Stack<Long> numbers = new Stack<Long>();
        while(in.hasNextLong()){
            long number = in.nextLong();
            numbers.push(number);
        }
        while(!numbers.empty())
            System.out.printf("%.4f%n", Math.sqrt((double) numbers.pop()));
    }    
}
