#include <stdio.h>
#include <limits.h>

int matrixChainRecursive(int dimensions[], int i, int j) {
    if (i == j) {
        return 0;
    }

    int minCost = INT_MAX;

    for (int k = i; k < j; k++) {
        int cost = matrixChainRecursive(dimensions, i, k) +
                   matrixChainRecursive(dimensions, k + 1, j) +
                   dimensions[i - 1] * dimensions[k] * dimensions[j];

        if (cost < minCost) {
            minCost = cost;
        }
    }

    return minCost;
}

int main() {
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    int dimensions[n + 1];
    printf("Enter the dimensions of each matrix:\n");
    for (int i = 0; i <= n; i++) {
        scanf("%d", &dimensions[i]);
    }

    int recursiveResult = matrixChainRecursive(dimensions, 1, n);
    printf("Minimum cost (Recursive): %d\n", recursiveResult);

    return 0;
}
