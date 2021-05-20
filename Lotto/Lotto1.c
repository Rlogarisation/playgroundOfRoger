// Personal lotto code generator
// Written 15/June/2020
// By Zheng Luo z5206267@cse.unsw.edu.au

/*
Choose 6 numbers from 1 to 45 in a single game panel.
Version 1:
Achieved printing out amount of random numbers within the range
In the future version:
1. Print 6 numbers only once in a row
2. Change question to "how many sets of 6 numbers you wish to generate"
3. Sorting to the sequencial order
4. Check if there is any sets are repeated with each other
*/

#include <stdio.h>
#include <stdlib.h>

#include <time.h>



// Print out the numbers within range
void PrintRandom(int upper, int lower, int size);

int main(void) {
    // Scan input 
    int size;
    printf("Please enter the amount of the random numbers you wish to generator: ");
    scanf("%d", &size);

    // Use current as seed to generate random number
    srand(time(0));

    // Define the range of output
    // Logic: (rand() % (upperLimit - lowerLimit + 1))) + lowerLimit;
    // In this case, upperLimit = 45, lowerLimit = 1
    #define UPPER 45
    #define LOWER 1

    // Print out the numbers within range
    PrintRandom(UPPER, LOWER, size);

    return 0;
}

void PrintRandom(int upper, int lower, int size) {
    int counterForPrinting = 0;
    while (counterForPrinting < size) {
        printf("%d ", rand() % (upper - lower + 1) + lower);

        counterForPrinting ++;
    }
    printf("\n");
    
}
