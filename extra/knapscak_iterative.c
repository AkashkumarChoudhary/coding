#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsackIterative(int W, int weights[], int values[], int n) {
    int table[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                table[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                table[i][w] = max(values[i - 1] + table[i - 1][w - weights[i - 1]], table[i - 1][w]);
            } else {
                table[i][w] = table[i - 1][w];
            }
        }
    }

    return table[n][W];
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

    int iterativeResult = knapsackIterative(capacity, weights, values, n);
    printf("Maximum value (Iterative): %d\n", iterativeResult);

    return 0;
}
