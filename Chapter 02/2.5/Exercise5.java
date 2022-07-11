import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;


public class Exercise5{
    public static void main(String[] args) {
         Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
         System.out.println("Enter the number of inputs : ");
         int length = in.nextInt();

         int[] sumArray = new int[length];

         System.out.println("Enter a number : ");
         sumArray[0] = in.nextInt();

         for(int i = 1; i < length; i++){
            System.out.println("Enter a number : ");
            sumArray[i] = in.nextInt() + sumArray[i-1];
         }

         System.out.println("Enter the value of i (starting from 0) : ");
         int i = in.nextInt();

         System.out.println("Enter the value of j (starting from 0) : ");
         int j = in.nextInt();

         int result = 0;

         if(i == 0)
            result = sumArray[j];
         else
            result = sumArray[j] - sumArray[i-1];

         System.out.println("Result is : " + result);
    }
}
