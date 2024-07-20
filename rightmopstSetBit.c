#include <stdio.h>
#include <stdlib.h>

int rightmostSetBit(int num) {
    return num & -num;
}

int main(int argc, char *argv[]) {
    if (argc !=2) {
        printf("Invalid Inputs\n");
        return 1;
    }
    unsigned int num = atoi(argv[1]);
    printf("The rightmost set bit of %d is %d\n", num, rightmostSetBit(num));
    return 0;
}
