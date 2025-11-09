#include <stdio.h>

void reverse(int arr[], int n) {
    int i, temp;
    for (i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    int arr[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    display(arr, n);

    reverse(arr, n);

    printf("Reversed array: ");
    display(arr, n);

    return 0;
}
