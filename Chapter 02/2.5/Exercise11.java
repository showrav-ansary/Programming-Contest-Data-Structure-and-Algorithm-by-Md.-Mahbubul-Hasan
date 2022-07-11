import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;


public class Exercise11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        System.out.println("Enter string 1: ");
        String string1 = in.nextLine();
        System.out.println("Enter string 2: ");
        String string2 = in.nextLine();
        for(int i = 0; i < string1.length() && i < string2.length(); i++) {
            if(string1.charAt(i) < string2.charAt(i)) {
                System.out.println(string1 + " is lexiographically smaller.");
                break;
            }else if (string1.charAt(i) > string2.charAt(i)){
                System.out.println(string2 + " is lexiographically smaller.");
                break;
            }else if (i == string1.length() - 1) {
                System.out.println(string1 + " is lexiographically smaller.");
                break;
            }else if (i == string2.length() -1){
                System.out.println(string2 + " is lexiographically smaller.");
                break;
            }
        }
    }    
}
