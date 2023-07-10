#include <stdio.h>

void bubbleSort(int array[], int n, int swapsArray[]) {
    for (int i = 0; i < n - 1; i++) {
        int swaps = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps++;
            }
        }

        swapsArray[i] = swaps;
    }
}

void printSwaps(int swapsArray[], int n) {
    for (int i = 0; i < n - 1; i++) {
        printf("Index at %d: %d\n", i + 1, swapsArray[i]);
    }
    printf("Index at 9: 0\n");
}

void printArray(int array[], int n) {
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(array) / sizeof(array[0]);
    int swapsArray[n - 1];

    bubbleSort(array, n, swapsArray);
    printSwaps(swapsArray, n);
    printArray(array, n);

    return 0;
}
