#include <stdio.h>


int printEvenNumbers(int arr[], int size) {
    printf("Even numbers in the array are:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printEvenNumbers(arr, n);

    return 0;
}
