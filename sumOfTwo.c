// Takes two number from user and prints the sum.

#include <stdio.h>

int main() {
    printf("\e[47;1m This program returns sum of two number. \e[0m\nEnter two number separated by as pace: \e[31;1m");
    double num1, num2, sum;
    scanf("%lf %lf", &num1, &num2);
    sum = num1 + num2;
    printf("\e[41;1;3m %.3g + %0.3g = %0.3g \e[0m\n", num1, num2, sum);
    return 0;
}