#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsackRecursive(int W, int weights[], int values[], int n) {
    if (n == 0 || W == 0) {
        return 0;
    }

    if (weights[n - 1] > W) {
        return knapsackRecursive(W, weights, values, n - 1);
    }

   
    else {
        return max(values[n - 1] + knapsackRecursive(W - weights[n - 1], weights, values, n - 1),
                   knapsackRecursive(W, weights, values, n - 1));
    }
}

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int weights[n], values[n];
    printf("Enter the weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    int capacity;
    printf("Enter the knapsack capacity: ");
    scanf("%d", &capacity);

    int recursiveResult = knapsackRecursive(capacity, weights, values, n);
    printf("Maximum value (Recursive): %d\n", recursiveResult);

    return 0;
}
