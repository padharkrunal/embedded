#include <stdio.h>
#include <stdlib.h>

int findParity(int num) {
    int parity = 0;
    while(num) {
        num &= num - 1;
        parity ^=1;
    }
    return parity;
}

int main(int argc, char *argv[]) {
    if (argc !=2) {
        printf("Invalid Inputs\n");
        return 1;
    }
    unsigned int num = atoi(argv[1]);
    printf("The parity of %d is %d\n", num, findParity(num));
    return 0;
}
