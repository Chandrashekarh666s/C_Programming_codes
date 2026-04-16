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
output
Enter 10 integers:1 2 3 4 5 6 7 8 9 10
Sum of the entered integers is: 55
