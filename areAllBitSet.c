#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool areAllBitSet(int num) {
    return ((num &(num + 1)) == 0);
}

int main(int argc, char *argv[]) {
    if (argc !=2) {
        printf("Invalid Inputs\n");
        return 1;
    }
    unsigned int num = atoi(argv[1]);

    if (areAllBitSet(num)) printf("All bits are set in %d\n", num);
    else printf("All bits are NOT set in %d\n", num);
    return 0;
}
