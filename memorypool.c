#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define POOL_SIZE 1024

char memoryPool[POOL_SIZE];
bool allocated[POOL_SIZE];

void initMemoryPool(){
    for (int i = 0; i<POOL_SIZE ; i++) {
        allocated[i] = false;
    }
}

void*  allocateMemory(int size) {
    if (size < 1) {
        printf("Invalid size\n");
        return NULL;
    }
    for (int i = 0; i <= POOL_SIZE - size ; i++) {
        bool isFree = true;
        for (int j = i; j < (i + size); j++) {
            if (allocated[j]) {
                isFree = false;
                printf("%d failed\n", j);
                break;
            }
        }
        if (isFree) {
            for (int j = i; j < (i+size); j++) {
                allocated[j] = true;
            }
            return &memoryPool[i];
        }
    }
    return NULL;
}



void freeMemory(void *ptr, int size){
    if (!ptr) {
        printf("NULL pointer\n");
        return;
    }
    int index = (char *) ptr - memoryPool;
    for (int i = index; i<index +size ; i++) {
        allocated[index] = false;
    }    
}

int main() {
    initMemoryPool();
    int memsize = -3;
    char* block1 = (char*)allocateMemory(memsize);
    if (block1) {
        printf("Allocated %d bytes.\n", memsize);
        freeMemory(block1, memsize);
        printf("Freed %d bytes.\n", memsize);
    } else {
        printf("Memory allocation failed for %d bytes\n", memsize);
    }
    
    return 0;
}
