#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned int number;

    // checking if the number is passed as a command-line argument
    if (argc == 2) {
        number = atoi(argv[1]); // converting the string argument to an integer
    } else {
        // prompting user to enter the number otherwise
        printf("Enter a base-10 number: ");
        scanf("%u", &number);
    }

    // loop from the 31st bit to the 0th bit
    for (int i = 31; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }

    printf("\n");
    return 0;    
}
