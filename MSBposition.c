#include <stdio.h>

int mostSignificantBitPosition(int num) {
/*    for (int i= 31; i>=0; i--) {
        int mask = 1<<i;
        printf("mask %d\n", mask);
        if (num & mask) return i;
    }
    return 0;
*/
    int msb = -1;
    while (num) {
        msb++;
        num >>= 1;
    }
    return msb;
}

int main() {
    int num = 18;
    printf("Most significant bit position in %d  is %d\n", num,  mostSignificantBitPosition(num));
    return 0;
}
