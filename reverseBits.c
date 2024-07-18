#include <stdio.h>

unsigned int reverseBits(unsigned int num) {
    num = (num>>16) | (num<<16);
    num = ((num & 0xFF00FF00)>>8) | ((num & 0x00FF00FF)<<8); 
    num = ((num & 0xF0F0F0F0)>>4) | ((num & 0x0F0F0F0F)<<4); 
    num = ((num & 0xCCCCCCCC)>>2) | ((num & 0x33333333)<<2); 
    num = ((num & 0xAAAAAAAA)>>1) | ((num & 0x55555555)<<1); 

    return num;
}

int main() {
    unsigned int num = 43261596;
    printf("Reversed bits of %X is  %X\n", num, reverseBits(num));
    return 0;
}
