#include <stdio.h>
#include <stdlib.h>

struct ProccesorRegister {
    char negative;
    char overflow;
    char accumulatorRegisterSize;
    char indexRegisterSize;
    char decimal;
    char irqDisable;
    char zero;
    char carry;

};

short accumulator = 0;
short x = 0;
short y = 0;
short stackPointer = 0;
double dataBankRegister = 0;
short direct = 0;
double programBank = 0;
short programCounter = 0xFFFC;

struct threeNum {
    int n1, n2, n3;
};
int main()
{
    int n;
    struct threeNum num;
    FILE* fptr;
    if ((fptr = fopen("snes.snes", "rb")) == NULL) {
        printf("Error! opening file");
        // If file pointer will return NULL
        // Program will exit.
        exit(1);
    }
    // else it will return a pointer to the file.
    for (n = 1; n < 5; ++n) {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2,
               num.n3);
    }
    fclose(fptr);
 
    return 0;
}