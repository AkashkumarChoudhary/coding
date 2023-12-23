#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert(Node** bucket, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*bucket == NULL) {
        *bucket = newNode;
    } else {
        Node* temp = *bucket;
        if (temp->data > value) {
            newNode->next = temp;
            *bucket = newNode;
        } else {
            while (temp->next != NULL && temp->next->data < value) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void bucketSort(int array[], int size) {
    Node* buckets[10];
    for (int i = 0; i < 10; i++) {
        buckets[i] = NULL;
    }

    for (int i = 0; i < size; i++) {
        int index = array[i] / 10; 
        insert(&buckets[index], array[i]);
    }

    int k = 0;
    for (int i = 0; i < 10; i++) {
        Node* temp = buckets[i];
        while (temp != NULL) {
            array[k++] = temp->data;
            temp = temp->next;
        }
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

    bucketSort(array, size);

    printf("Sorted array: ");
    printArray(array, size);

    return 0;
}
