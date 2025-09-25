//Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) 
//until the user chooses to exit. Must use a do while loop to repeat until exit.
#include <stdio.h>

int main() {
    double a, b;
    char op;
    do {
        printf("\nEnter expression (a op b) or x to exit: ");
        scanf(" %c", &op);   // read operator

        if (op == 'x' || op == 'X') break;

        scanf("%lf %lf", &a, &b);

        switch (op) {
            case '+': printf("= %.2lf\n", a + b); break;
            case '-': printf("= %.2lf\n", a - b); break;
            case '*': printf("= %.2lf\n", a * b); break;
            case '/': b != 0 ? printf("= %.2lf\n", a / b) : printf("Error! Divide by 0\n"); break;
            default:  printf("Invalid operator!\n");
        }
    } while (1);

    return 0;
}