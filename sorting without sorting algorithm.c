#include <stdio.h>
int main() {
    int N, i, j, minIndex, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d elements of the array: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Sorting the array without using any sorting algorithm
    for (i = 0; i < N - 1; i++) {
        // Assume the current element is the minimum
        minIndex = i;

        // Find the minimum element in the remaining unsorted array
        for (j = i + 1; j < N; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the current element
        if (minIndex != i) {
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }

    // Print the sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
