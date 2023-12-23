#include <stdio.h>

void separateArrays(int arr[], int n, int evenArr[], int *evenCount, int oddArr[], int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[*evenCount] = arr[i];
            (*evenCount)++;
        } else {
            oddArr[*oddCount] = arr[i];
            (*oddCount)++;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int evenArr[n], oddArr[n];
    int evenCount, oddCount;
    
    separateArrays(arr, n, evenArr, &evenCount, oddArr, &oddCount);
    
    printf("\nEven Array: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    
    printf("\nOdd Array: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    
    return 0;
}
