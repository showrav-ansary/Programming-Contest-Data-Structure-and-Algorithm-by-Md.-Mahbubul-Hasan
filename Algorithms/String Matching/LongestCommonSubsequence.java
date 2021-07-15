import java.util.*;
import java.io.*;

public class LongestCommonSubsequence{
    private static int GetLCSLength(char[] stringA, char[] stringB,
                                    int stringALength, int stringBlength){
        if (stringALength == 0 || stringBlength == 0)
            return 0;
        if (stringA[stringALength-1] == stringB[stringBlength-1])
            return 1 + GetLCSLength(stringA, stringB, stringALength-1, stringBlength-1);
        else
            return max(GetLCSLength(stringA, stringB, stringALength, stringBlength-1),
                       GetLCSLength(stringA, stringB, stringALength-1, stringBlength)
            );
    }

    private static boolean IsSubsequence(char[] stringA, char[] stringB,
                                         int stringALength, int stringBlength){
        return (GetLCSLength(stringA, stringB,
                             stringALength, stringBlength)
                == stringBlength)? true : false;

    }

    private static int max(int a, int b){
        return (a > b)? a : b;
    }

    public static void main(String[] args){
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

        System.out.println("Enter the String 1 : ");
        String stringA = in.nextLine();
        char[] stringACharacters = stringA.toCharArray();

        System.out.println("Enter the String 2 : ");
        String stringB = in.nextLine();
        char[] stringBCharacters = stringB.toCharArray();

        System.out.println("Is String 2 a Subsequence of String 1 : "
                           + IsSubsequence(stringACharacters, stringBCharacters,
                                           stringA.length(), stringB.length())
        );

    }

}
