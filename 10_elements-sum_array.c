#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the entered integers is: %d\n", sum);

    return 0;
}
