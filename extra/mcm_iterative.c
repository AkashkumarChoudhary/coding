#include <stdio.h>
#include <limits.h>

int matrixChainIterative(int dimensions[], int n) {
    int table[n][n];

    for (int i = 1; i < n; i++) {
        table[i][i] = 0;
    }

    for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            table[i][j] = INT_MAX;

            for (int k = i; k <= j - 1; k++) {
                int cost = table[i][k] + table[k + 1][j] +
                           dimensions[i - 1] * dimensions[k] * dimensions[j];

                if (cost < table[i][j]) {
                    table[i][j] = cost;
                }
            }
        }
    }

    return table[1][n - 1];
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

    int iterativeResult = matrixChainIterative(dimensions, n + 1);
    printf("Minimum cost (Iterative): %d\n", iterativeResult);

    return 0;
}
