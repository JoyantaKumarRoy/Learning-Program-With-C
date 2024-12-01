// Show the sizes of different data type.

#include <stdio.h>

int main() {
    printf("\e[41mThis program shows the different data type sizes.\e[0m\n");

    printf("\e[1mType\tSize\e[0m\n");
    printf("short\t%d\n", sizeof(short));
    printf("int\t%d\n", sizeof(int));
    printf("float\t%d\n", sizeof(float));
    printf("double\t%d\n", sizeof(double));
    printf("char\t%d\n", sizeof(char));
    return 0;
}