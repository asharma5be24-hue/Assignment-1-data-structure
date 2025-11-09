#include <stdio.h>
void create(int A[], int *n) {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter %d elements:\n", *n);
    for(i = 0; i < *n; i++) {
        scanf("%d", &A[i]);
    }
}

void display(int A[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void removeDuplicates(int A[], int *n) {
    int i, j, k;
    for(i = 0; i < *n; i++) {
        for(j = i + 1; j < *n; j++) {
            if(A[i] == A[j]) {
                
                for(k = j; k < *n - 1; k++) {
                    A[k] = A[k + 1];
                }
                (*n)--;   
                j--;      
            }
        }
    }
}

int main() {
    int A[50], n;
    
    create(A, &n);

    printf("Original array: ");
    display(A, n);

    removeDuplicates(A, &n);

    printf("Array after removing duplicates: ");
    display(A, n);

    return 0;
}
#include <stdio.h>
void create(int A[], int *n) {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter %d elements:\n", *n);
    for(i = 0; i < *n; i++) {
        scanf("%d", &A[i]);
    }
}

void display(int A[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void removeDuplicates(int A[], int *n) {
    int i, j, k;
    for(i = 0; i < *n; i++) {
        for(j = i + 1; j < *n; j++) {
            if(A[i] == A[j]) {
                
                for(k = j; k < *n - 1; k++) {
                    A[k] = A[k + 1];
                }
                (*n)--;   
                j--;      
            }
        }
    }
}

int main() {
    int A[50], n;
    
    create(A, &n);

    printf("Original array: ");
    display(A, n);

    removeDuplicates(A, &n);

    printf("Array after removing duplicates: ");
    display(A, n);

    return 0;
}
