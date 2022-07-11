import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exercise10 {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        System.out.println("Enter the text: ");
        String text = in.nextLine();
        boolean spaceStart = true;
        boolean spaceEnd = false;
        int wordCount = 0;
        for(int i = 0; i < text.length(); i++) {
            if(text.charAt(i) == ' ') {
                spaceEnd = false;
                spaceStart = true;
            } else {  
                spaceEnd = true;
                if(spaceStart && spaceEnd) {
                    wordCount++;
                    spaceStart = false;
                }
            }
        }
        System.out.println(wordCount); 
    }
    
}