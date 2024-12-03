// Convert binary to decimal.

#include <stdio.h>
#include <math.h>

int main() {
    long bin;
    int dec = 0, bits;
    printf("Binary: ");
    scanf("%ld", &bin);

    int power = 0;
    while (bin >= 1) {
        dec += (int) pow(2, power) * (bin % 10);
        power++;
        bin = bin / 10;
    }
    printf("Decimal = %d\n", dec);
    return 0;
}