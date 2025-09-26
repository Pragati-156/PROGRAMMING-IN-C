//Write a C program to find the factorial of a number using a while loop.
#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long fact = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= n) {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}