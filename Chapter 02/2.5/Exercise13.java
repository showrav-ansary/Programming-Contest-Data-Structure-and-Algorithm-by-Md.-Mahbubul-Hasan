import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exercise13 {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        System.out.println("Enter string A:");
        String a = in.nextLine();
        System.out.println("Enter string B:");
        String b = in.nextLine();
        int indexB = 0;
        for(int i = 0; i < a.length() && indexB < b.length();i++) 
            if(a.charAt(i) == b.charAt(indexB)) 
                indexB++;
        if(indexB == b.length())
            System.out.println("B is a substring of A");
        else
            System.out.println("B is not a substring of A");
    }
}
