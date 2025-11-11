#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, n, m, p, q;

    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &n, &m);

    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &p, &q);

    if (m != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i=0; i<p; i++)
        for (j=0; j<q; j++)
            scanf("%d", &b[i][j]);

    // Multiplication
    for (i=0; i<n; i++) {
        for (j=0; j<q; j++) {
            c[i][j] = 0;
            for (k=0; k<m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
