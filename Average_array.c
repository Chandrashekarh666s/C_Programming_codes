#include <stdio.h>


double calculateAverage(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double avg = calculateAverage(arr, n);
    printf("Average is: %.2lf\n", avg);

    return 0;
}
