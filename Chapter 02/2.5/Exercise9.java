// This problem can be solved using `Rabin-Karp` or `KMP` or any similar pattern matching algorithm
// Refer to `Introduction to Algorithms` (CLRS), page 985

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Vector;

public class Exercise9 {

    private static int[] prefixArray; // The pi-array; for global acces

    private static int patternLength; // m == pattern's length; for global acces

    private static int textLength; // n == text's length; for global access

    private static Vector<Integer> patternShiftIndex; // At which indice the patterns are found after shifting

    private static int patternOccured = 0; // How many times the pattern occured

    // In Java, we can't directly iterate over the characters
    private static char[] patternArray;
    private static char[] textArray;

    // A slave method to compute prefix array
    private static void ComputePrefixArray(String pattern) {

        patternArray = new char[patternLength + 1];
        for (int index = 1; index <= patternLength; index++)
            patternArray[index] = pattern.charAt(index - 1);

        // This is our pi-array
        prefixArray = new int[patternLength + 1];

        prefixArray[1] = 0; // No proper prefix at length(pattern) == 0

        int prefixLength = 0;

        for (int patternIndex = 2; patternIndex <= patternLength; patternIndex++) {
            // Update prefix length
            while (prefixLength > 0
                    && patternArray[prefixLength + 1] != patternArray[patternIndex])
                prefixLength = prefixArray[prefixLength];

            // Proper prefix == suffix
            if (patternArray[prefixLength + 1] == patternArray[patternIndex])
                prefixLength++;
            // Assign prefix length
            prefixArray[patternIndex] = prefixLength;
        }
    }

    // Actual KMP matching
    private static void KMPMatcher(String text, String pattern) {
        // Populate the prefixArray (pi-array)
        ComputePrefixArray(pattern);

        patternShiftIndex = new Vector<Integer>();

        textArray = new char[textLength + 1];

        for (int index = 1; index <= textLength; index++)
            textArray[index] = text.charAt(index - 1);

        int charactersMatched = 0;

        for (int textIndex = 1; textIndex <= textLength; textIndex++) {
            // update how many characters have matched currently using the prefix array
            while (charactersMatched > 0
                    && patternArray[charactersMatched + 1] != textArray[textIndex])
                charactersMatched = prefixArray[charactersMatched];

            // Increment if characters matched
            if (patternArray[charactersMatched + 1] == textArray[textIndex])
                charactersMatched++;

            // Check if pattern found
            if (charactersMatched == patternLength) {
                patternOccured++;
                patternShiftIndex.add(textIndex - patternLength);

                // Reset to the valid prefix
                charactersMatched = prefixArray[charactersMatched];
            }

        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

        System.out.println("Enter the Text : ");
        String text = in.nextLine();
        textLength = text.length();

        System.out.println("Enter the Pattern : ");
        String pattern = in.nextLine();
        patternLength = pattern.length();

        KMPMatcher(text, pattern);

        System.out.println("Pattern has occured : " + patternOccured + " times!");
        for (Integer i : patternShiftIndex) {
            System.out.println("Pattern can be found by shifting to text index : " + i);
        }

    }
}
