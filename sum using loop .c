//Write a program in C to calculate the sum of the first n natural numbers using a for loop
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + i; 
    }
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}