import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exercise6{

    private static int GetLengthOfStringWithCharArray(String string){
        int length = 0;
        char[] charArray = string.toCharArray();
        for(char character : charArray){
            length++;
        }
        return length;
    }

    public static void main(String[] args) {
         Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
         System.out.println("Enter the input : ");
         String input = in.nextLine();

         System.out.println("Result is (using `.length()`) : " + input.length());
         System.out.println("Result is (custom method) : " + GetLengthOfStringWithCharArray(input));
    }
}
