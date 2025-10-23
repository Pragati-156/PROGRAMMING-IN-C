#include <stdio.h>

void average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    float avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    average(arr, n);   // function call

    return 0;
}