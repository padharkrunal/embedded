#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPalindrome(unsigned int num) {
    unsigned int reversed = 0, original = num;

    while (num) {
        reversed = (reversed << 1) | (num & 1);
        num >>=1;
    }
    return original==reversed;
}

int main(int argc, char *argv[]) {
    if (argc !=2) {
        printf("Invalid Inputs\n");
        return 1;
    }
    unsigned int num = atoi(argv[1]);
    if (isPalindrome(num)) {
        printf("%u is a bitwise palindrome\n", num);
    } else {
        printf("%u is not a bitwise palindrome\n", num);
    }
    return 0;
}
