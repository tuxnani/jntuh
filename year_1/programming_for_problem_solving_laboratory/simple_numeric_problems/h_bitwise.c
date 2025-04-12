#include <stdio.h>
#include <stdlib.h> // For exit()

void printBinary(unsigned char num) {
    // Print 8-bit binary representation
    printf("Binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int input;
    unsigned char number;

    // Get input from user
    printf("Enter a number between 0 and 255: ");
    
    // Check if input is a valid number
    if (scanf("%d", &input) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        exit(1);
    }

    // Validate input range
    if (input < 0) {
        printf("Error: Negative numbers are not allowed.\n");
        exit(1);
    }
    if (input > 255) {
        printf("Error: Number must be between 0 and 255.\n");
        exit(1);
    }

    number = (unsigned char)input;

    // Display results
    printf("Decimal: %d\n", number);
    printBinary(number);

    return 0;
}