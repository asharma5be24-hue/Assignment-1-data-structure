#include <stdio.h>

int main() {
    int a[10][10], n, m, i, j;
    int rowSum, colSum;

    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements:\n");
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            scanf("%d", &a[i][j]);

    // Row sum
    for (i=0; i<n; i++) {
        rowSum = 0;
        for (j=0; j<m; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }

    // Column sum
    for (j=0; j<m; j++) {
        colSum = 0;
        for (i=0; i<n; i++) {
            colSum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, colSum);
    }

    return 0;
}
