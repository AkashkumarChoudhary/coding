 #include <stdio.h>

// Function to find the maximum element in the array
int getMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Using counting sort to sort the elements based on a particular digit
void countingSort(int array[], int size, int place) {
    const int max = 10;
    int output[size];
    int count[max];
    for(int i=0;i<max;i++)
        count[i] = 0;

    for (int i = 0; i < size; i++) {
        count[(array[i] / place) % 10]++;
    }

    for (int i = 1; i < max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[(array[i] / place) % 10] - 1] = array[i];
        count[(array[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

// Radix sort implementation
void radixSort(int array[], int size) {
    int max = getMax(array, size);

    // Perform counting sort for every digit
    for (int place = 1; max / place > 0; place *= 10) {
        countingSort(array, size, place);
    }
}

// Function to print the array
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

    radixSort(array, size);

    printf("Sorted array: ");
    printArray(array, size);

    return 0;
}
