#include <stdio.h>

int main() {
    int a,b;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(operator) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %d\n", a /b);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}