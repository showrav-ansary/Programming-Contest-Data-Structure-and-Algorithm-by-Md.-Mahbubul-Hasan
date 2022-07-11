import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Exercise12 {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        System.out.println("Enter date: DD/MM/YYYY");
        String date = in.nextLine();
        String[] informations = date.split("/");
        int day = Integer.parseInt(informations[0]);
        int month = Integer.parseInt(informations[1]);
        int year = Integer.parseInt(informations[2]);
        System.out.println(
            "Day: " + day + "\n" +
            "Month: " + month + "\n" +
            "Year: " + year 
        );
    }    
}
