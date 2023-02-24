#include <stdio.h>

int main(void)
{
    // Declare constants for the basic mathematical characters
    //const add = '+';
    //const substract = '-';
    //const multiply = '*';
    //const divide = '/';

    // Declare variables for user input
    int num1;
    int num2;
    char operation;

    // Prompt user for the first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Prompt user for the second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // promt user to enter operation
    printf("Enter an operator: ");
    scanf("%c", &operation);

    // Use switch to get the result
    switch (operation)
    {   
        // Keep track of the result
        int result;

        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;

        case '/':
            result = num1 + num2;
            printf("%d", result);
            break;

    }
}