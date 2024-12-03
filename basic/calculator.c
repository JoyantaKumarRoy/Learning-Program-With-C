// Calculator for basic arithmetic operation.

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    
    printf("Calculator for basic arithmetic operation.\n");
    printf("[num] [operator] [num]: ");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("I can do [+ - * /]\n");
        return 0;
    }
    printf("%g %c %g = %g\n", num1, operator, num2, result);
    return 0;
}