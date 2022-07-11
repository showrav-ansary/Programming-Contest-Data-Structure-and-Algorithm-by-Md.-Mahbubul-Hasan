import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exercise8{

    public static void main(String[] args) {
         Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

         System.out.println("Enter the input 1 : ");
         String input1 = in.nextLine();
         System.out.println("Enter the input 2 : ");
         String input2 = in.nextLine();

        // String result = input1 + input2;
         String resultConcat = input1.concat(input2);

         String result = "";
         for(char x : input1.toCharArray())
            result += Character.toString(x);

         for(char x : input2.toCharArray())
            result += Character.toString(x);


         System.out.println("Result (using concat operator) : " + resultConcat);
         System.out.println("Result (joining characters) : " + result);
    }
}
