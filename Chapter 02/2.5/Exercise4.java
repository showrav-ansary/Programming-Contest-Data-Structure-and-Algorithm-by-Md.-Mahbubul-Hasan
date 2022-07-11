import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;


public class Exercise4{
    // The question has asked to do it by an array. So, we are taking it.

    private static int GetResult(int[] array){
        int result = 0;
        int currentConsecutiveOnes = 0;
        for(int i = 0; i < array.length; i++){
            if(array[i] == 1)
                currentConsecutiveOnes++;
            else
                currentConsecutiveOnes = 0;
            if(currentConsecutiveOnes > result)
                result = currentConsecutiveOnes;
        }
        return result;
    }

    public static void main(String[] args) {
         Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
         System.out.println("Enter the length of the array : ");
         int length = in.nextInt();

         int[] inputs = new int[length];

         // Could have done without the array if we are taking direct inputs
         // int currentConsecutiveOnes = 0;
         // int currentMax = 0;
         for(int i = 0; i < length; i++){
            System.out.println("Enter a bit (1/0) : ");
            inputs[i] = in.nextInt();
            /* If we choose not to take the array
             int input = in.nextInt();
             if(input==0){
                 if(currentConsecutiveOnes > currentMax)
                    currentMax = currentConsecutiveOnes;
                 currentConsecutiveOnes = 0;
             }else{
                 currentConsecutiveOnes++;
             }*/

         }
         System.out.println("Number of max consecutive ones : "
                            + GetResult(inputs));
    }
}
