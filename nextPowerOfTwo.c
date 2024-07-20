#include <stdio.h>
#include <stdlib.h>


unsigned int helper(unsigned int num) {
    if ((num & (num-1)) == 0) return num<<1;
    return helper(num & (num-1));
}

unsigned int nextPowerOfTwo(unsigned int num) {
    if (num == 0) return 1;
    if ((num & (num-1)) == 0) return num;

    return helper((num & (num-1)));
}
/*
unsigned int nextPowerOfTwo(unsigned int num) {
    if (num == 0) return 1;
    if ((num & (num-1)) == 0) return num;

    while ((num & (num-1))) {
        num &= num-1;
    }
    return num<<1;
}
*/

/*
unsigned int nextPowerOfTwo(unsigned int num) {
    if (num == 0) return 1;
    if ((num & (num - 1)) == 0) return num;
    while ((num & (num - 1)) != 0) {
        num &= (num - 1);
    }
    return num << 1;
}
*/
int main(int argc, char *argv[]) {
    if (argc !=2) {
        printf("Invalid Inputs\n");
        return 1;
    }
    unsigned int num = atoi(argv[1]);
    printf("The next power of 2 greater than %u is %u\n", num, nextPowerOfTwo(num));
    return 0;
}
