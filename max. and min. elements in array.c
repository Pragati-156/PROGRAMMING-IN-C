# include <stdio.h>
int max(int arr[], int n) {
    int m = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > m)
            m = arr[i];
    }
    return m;
}

int min(int arr[], int n) {
    int m = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < m)
            m = arr[i];
    }
    return m;
}

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum = %d\n", max(arr, n));
    printf("Minimum = %d\n", min(arr, n));

    return 0;
}