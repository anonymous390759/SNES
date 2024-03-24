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

int main()
{
 
    // Declare the file pointer
    FILE* filePointer;
 
    // Declare the variable for the data to be read from
    // file
    char dataToBeRead[50];
 
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("snesrom.snes", "rb");
 
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL) {
        printf("snesrom.snes file failed to open.");
    }
    else {
 
        printf("The file is now opened.\n");
 
        // Read the dataToBeRead from the file
        // using fgets() method
        while (fgets(dataToBeRead, 50, filePointer)
               != NULL) {
 
            // Print the dataToBeRead
            printf("%s", dataToBeRead);
        }
 
        // Closing the file using fclose()
        fclose(filePointer);
 
        printf(
            "Data successfully read from file snestest.snes\n");
        printf("The file is now closed.");
    }
    return 0;
}