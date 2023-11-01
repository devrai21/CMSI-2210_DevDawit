#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned int number;
    int bits;

    // check if the number and bits are passed as command-line arguments
    if (argc == 3) {
        number = atoi(argv[1]); // converting string argument to an integer
        bits = atoi(argv[2]);   // converting the string argument to bits
    } else if (argc == 2) {
        bits = atoi(argv[1]);   // get btis if only provided
        // prompt the user to enter the number
        printf("Enter a base-10 number: ");
        scanf("%u", &number);
    } else {
        // If the arguments are not as expected, print the correct usage
        printf("Usage: %s <number> <bits>\n", argv[0]);
        return 1;
    }

    // Print the number in hexadecimal format based on the bits
    if (bits == 32) {
        printf("0x%08X\n", number);
    } else if (bits == 64) {
        printf("0x%016llX\n", (unsigned long long)number);
    } else {
        printf("These are invalid bits. Please choose 32 or 64.\n");
    }

    return 0;
}

