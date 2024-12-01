// Swap two number.

#include <stdio.h>

int main() {
    double num1, num2, temp;
    printf("Enter two number to swap: ");
    scanf("%lf %lf", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf(">> %g\t%g", num1, num2);
    return 0;
}