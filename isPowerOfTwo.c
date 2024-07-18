#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPowerOfTwo(int num) {
    return num > 0 && (num & (num - 1)) == 0;
}

bool isPowerofFour(int num) {
    return (isPowerOfTwo(num) && (num & 0X55555555));
}

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    if (isPowerofFour(num)) {
        printf("%d is a power of 4.\n", num);
    } else {
        printf("%d is not a power of 4.\n", num);
    }

    return 0;
}
