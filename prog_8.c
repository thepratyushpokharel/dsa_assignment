#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void bubbleSort(int arr[], int n, int* cmp, int* swap) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++) {
            (*cmp)++;
            if (arr[j] > arr[j+1]) {
                (*swap)++;
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
}

int main() {
    int n, arr[SIZE];
    int cmp = 0, swap = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000 + 1;
    }

    printf("Before Sorting:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\nSorting using Bubble Sort...\n");
    bubbleSort(arr, n, &cmp, &swap);

    printf("After Sorting:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\nComparisons: %d\nSwaps: %d\n", cmp, swap);
    return 0;
}
