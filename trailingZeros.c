#include <stdio.h>
#include <stdlib.h>

int countTrailingZeros(int num) {
    int count = 0;
    for (int i = 0; i<32; i++) {
        if (num & (1<<i)) return count;
        else count++;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc!= 2) {
        printf("Invalid Input(s)\n");
        return 1;
    }
    int num = atoi(argv[1]);
    printf("Number of trailing zeros in %d is %d\n", num, countTrailingZeros(num));
    return 0;
}
