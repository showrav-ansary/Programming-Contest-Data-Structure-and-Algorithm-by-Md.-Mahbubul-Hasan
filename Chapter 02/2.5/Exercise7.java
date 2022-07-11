import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exercise7{

    public static void main(String[] args) {
         Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
         System.out.println("Enter the input : ");
         String input = in.nextLine();

         int upperCase = 0;
         int lowerCase = 0;
         char[] characterArray = input.toCharArray();
         for(char character : characterArray){
             if(character >= 65 && character <= 90)
                upperCase++;
             else if(character >= 97 && character <= 122)
                lowerCase++;
         }

         System.out.println("Lower case : " + lowerCase);
         System.out.println("Upper case : " + upperCase);
    }
}
