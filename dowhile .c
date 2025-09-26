/*Write a C program for a simple calculator that repeatedly asks the user for two numbers and an operation (+, -, *, /) 
until the user chooses to exit. Must use a do while loop to repeat until exit.*/
#include <stdio.h>
int main() {
     
    double num1, num2, answer;
    char op, yes_no;

    do {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op);  // space before %c to avoid newline issue

        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        switch (op) {
            case '+':
                answer = num1 + num2;
                printf("Answer is %.2lf\n", answer);
                break;

            case '-':
                answer = num1 - num2;
                printf("Answer is %.2lf\n", answer);
                break;

            case '*':
                answer = num1 * num2;
                printf("Answer is %.2lf\n", answer);
                break;

            case '/':
                if (num2 != 0) {
                    answer = num1 / num2;
                    printf("Answer is %.2lf\n", answer);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            default:
                printf("Invalid operator!\n");
        }

        printf("Continue or not? (y/n): ");
        scanf(" %c", &yes_no);  // again space before %c

    } while (yes_no == 'y' || yes_no == 'Y');

    return 0;
}