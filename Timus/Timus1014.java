import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

import java.util.Vector;

public class Timus1014 {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int number = in.nextInt();

        // corner case 1 : n == 0
        if(number == 0) 
            System.out.println(10);
            
        // corner case 2 : n == 1
        else if (number == 1) 
            System.out.println(number);

        else{
            Vector<Integer> digits = new Vector<>();
            for(int i = 9; i >= 2; i--){
                while(number%i == 0){
                    digits.add(i);
                    number /= i;
                }  
            }

            // Reaching 1 means we have divided by all the digit factors possible within the range of 2 to 9, not a prime
            if(number == 1)
                for(int index = digits.size()-1; index >= 0; index--)
                    System.out.print(digits.get(index));
            // Prime number, thus reaching 1 was not possible
            else
                System.out.println(-1);        
               
        }
    }
}
