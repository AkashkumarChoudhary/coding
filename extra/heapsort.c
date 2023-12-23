#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 void heapify(int array[], int size, int root) {
    int largest = root;          
    int left = 2 * root + 1;     
    int right = 2 * root + 2;    

    if (left < size && array[left] > array[largest]) {
        largest = left;
    }

    if (right < size && array[right] > array[largest]) {
        largest = right;
    }

    if (largest != root) {
        swap(&array[root], &array[largest]);

        heapify(array, size, largest);
    }
}

void heapSort(int array[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(array, size, i);
    }

    for (int i = size - 1; i > 0; i--) {
        swap(&array[0], &array[i]);

        heapify(array, i, 0);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Original array: ");
    printArray(array, size);

    heapSort(array, size);

    printf("Sorted array: ");
    printArray(array, size);

    return 0;
}
