#include <stdio.h>

int findUnique(int nums[], int size) {
    int res = 0;

    for (int i = 0 ; i< size; i++) {
        res ^= nums[i];
    }
    return res;
}

int main() {
    int nums[] = {2, 3, 5, 4, 5, 3, 4, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("The unique element is %d\n",findUnique(nums, size));
    return 0;
}
