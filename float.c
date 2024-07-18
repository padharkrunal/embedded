#include <stdio.h>
/*
void printBinaryfloat(float n) {
    int i;
    for (i = 31; i >= 0; i--) {  // Assuming 32-bit integer
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
void printBinarydouble(double n) {
    int i;
    for (i = 31; i >= 0; i--) {  // Assuming 32-bit integer
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}*/


int main() {
	float myVariable = 65.125; 
  
	// printing floating point number 
	printf("Float value is %f\n", myVariable);
	printf("Float value is %08lX\n", myVariable);

	
	double myVariabled = 789.123456; 
	printf("Double value is %lf\n", myVariabled); 
	printf("Double value is %016llX\n", myVariabled); 

	return 0; 
}
