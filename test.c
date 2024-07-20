#include <stdio.h>

void printSubsets(int set[], int size) {
    int subsetCount = 1 << size; // 2^size
    for (int i = 0; i < subsetCount; ++i) {
        printf("{ ");
        for (int j = 0; j < size; ++j) {
            if (i & (1 << j)) {
                printf("%d ", set[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    int set[] = {1, 2, 3};
    int size = sizeof(set) / sizeof(set[0]);
    printSubsets(set, size);
    return 0;
}
