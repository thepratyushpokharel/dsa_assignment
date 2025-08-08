#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void heapifyMin(int arr[], int n, int i) {
    int smallest = i, l = 2*i + 1, r = 2*i + 2;

    if (l < n && arr[l] < arr[smallest])
        smallest = l;
    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        heapifyMin(arr, n, smallest);
    }
}

void heapifyMax(int arr[], int n, int i) {
    int largest = i, l = 2*i + 1, r = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapifyMax(arr, n, largest);
    }
}

void buildHeaps(int arr[], int n) {
    int minHeap[n], maxHeap[n];
    for (int i = 0; i < n; i++) {
        minHeap[i] = maxHeap[i] = arr[i];
    }

    for (int i = n/2 - 1; i >= 0; i--) {
        heapifyMin(minHeap, n, i);
        heapifyMax(maxHeap, n, i);
    }

    printf("Min Heap: ");
    for (int i = 0; i < n; i++) printf("%d ", minHeap[i]);

    printf("\nMax Heap: ");
    for (int i = 0; i < n; i++) printf("%d ", maxHeap[i]);
}

int main() {
    int arr[] = {9, 4, 7, 1, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    buildHeaps(arr, n);

    return 0;
}
