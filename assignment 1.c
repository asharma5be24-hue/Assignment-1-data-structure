#include <stdio.h>
int A[20];

void create(int A[], int *n) {
    int i=0;
    printf("Enter the number of elements to insert: ");
    scanf("%d", n);

    printf("Enter %d elements:\n", *n);
    for(i=0; i<*n; i++) {
        scanf("%d", &A[i]);
    }
}

void display(int A[], int n) {
    int i=0;
    for(i=0; i<n; i++) {   // fixed <= to <
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insert(int A[], int *n) {
    int pos, val;
    printf("Enter the position you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value: ");
    scanf("%d", &val);

    if(pos < 0 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }

    int j = *n - 1;
    while(j >= pos) {
        A[j+1] = A[j];
        j--;
    }
    A[pos] = val;
    (*n)++;
}

void del(int A[], int *n) {
    int val, i, pos = -1;
    printf("Enter the element you want to delete: ");
    scanf("%d", &val);

    // find element
    for(i=0; i<*n; i++) {
        if(A[i] == val) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element not found!\n");
        return;
    }

    // shift left
    for(i=pos; i<*n-1; i++) {
        A[i] = A[i+1];
    }
    (*n)--;

    printf("Element deleted.\n");
}

void linear_search(int A[], int n) {
    int val, i, found = 0;
    printf("Enter the element you want to search: ");
    scanf("%d", &val);

    for(i=0; i<n; i++) {
        if(A[i] == val) {
            printf("Element found at position %d\n", i);
            found = 1;
        }
    }
    if(!found) printf("Element not found.\n");
}

void binary_search(int A[], int n) {
    int val, low=0, high=n-1, mid, found=0;
    printf("Enter the value you want to search: ");
    scanf("%d", &val);

    while(low <= high) {
        mid = (low + high)/2;
        if(A[mid] == val) {
            printf("Element found at position %d\n", mid);
            found = 1;
            break;
        }
        else if(val < A[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(!found) printf("Element not found.\n");
}

void bubble_sort(int A[], int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("Array sorted.\n");
}

int main() {
    int n = 0, choice;

    create(A, &n);

    while (1) {
        printf("\n=== MENU ===\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Linear Search\n");
        printf("5. Binary Search\n");
        printf("6. Bubble Sort\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(A, n);
                break;
            case 2:
                insert(A, &n);
                printf("After insertion: ");
                display(A, n);
                break;
            case 3:
                del(A, &n);
                printf("After deletion: ");
                display(A, n);
                break;
            case 4:
                linear_search(A, n);
                break;
            case 5:
                binary_search(A, n);
                break;
            case 6:
                bubble_sort(A, n);
                printf("After sorting: ");
                display(A, n);
                break;
            case 7:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
