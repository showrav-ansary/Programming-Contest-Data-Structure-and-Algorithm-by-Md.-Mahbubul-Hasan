#include <stdio.h>
#include <math.h>

// For using 2 for loops, go for buble sort/insertion sort

// There are a lot of sorting algorithms out there

// I am implementing a generic quick sort algorithm

// A generic slave method of quickSort(); nothing to tweak
int partition(int array[], int leftIndex, int rightIndex){
    int pivotValue = array[rightIndex];
    int toBePivotIndex = (leftIndex - 1);
    for(int comparisonIndex = leftIndex; comparisonIndex <= rightIndex - 1; comparisonIndex++){
        if (
            // We are sorting in ascending order
            // Switch the condition if want to sort in descending order
            array[comparisonIndex] < pivotValue
        ) {
            // Take the bigger value to the right
            toBePivotIndex++;
            int temp = array[toBePivotIndex];
            array[toBePivotIndex] = array[comparisonIndex];
            array[comparisonIndex] = temp;
        }
    }
    // Take the pivot value in the correct position
    int temp = array[toBePivotIndex+1];
    array[toBePivotIndex+1] = array[rightIndex];
    array[rightIndex] = temp;

    return (toBePivotIndex + 1); // new pivot point
}

// A generic quickSort() method; nothing to tweak
void quickSort(int array[], int leftIndex, int rightIndex){
    // Pivot point can be chosen arbitarily; implement accordingly
    if (leftIndex < rightIndex) {
        int partitionIndex = partition(array, leftIndex, rightIndex);
        quickSort(array, leftIndex, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, rightIndex);
    }
}


int main(){
    printf("Please enter size of the array\n" );
    int size;
    scanf("%d", &size);
    int array[size];

    for(int i = 0; i < size;i++){
        printf("Please enter number %d :\n", i+1 );
        scanf("%d", &array[i]);
    }

    //sort array
    quickSort(array, 0, size-1);

    // The array for descending order
    // Of course we can simply start printing from righ to left
    int reversedArray[size];
    for(int i = 0; i < size; i++)
        reversedArray[i] = array[size-i-1];

    printf("Ascending order : \n");
    for(int i = 0; i < size; i++)
        printf("%d\n",array[i] );

    printf("Descending order : \n");
    for(int i = 0; i < size; i++)
        printf("%d\n",reversedArray[i] );




}
