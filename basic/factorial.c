// Returns the factorial.
#include <stdio.h>


long getFactorial(int num) {
    if (num>1)
        return num*getFactorial(num - 1);
    else
        return 1;
}

int main() {
    int num;
    printf("Enter a number [Int]: ");
    scanf("%d", &num);
    printf("!%d = %ld\n", num, getFactorial(num));

    return 0;
}