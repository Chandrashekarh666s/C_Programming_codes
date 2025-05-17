#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Demonstrating pointer arithmetic:\n");

    for(int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\t", i, (ptr + i));
        printf("Value: %d\n", *(ptr + i));
    }

    return 0;
}
