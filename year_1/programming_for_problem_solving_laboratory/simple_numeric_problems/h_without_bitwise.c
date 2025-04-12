#include <stdio.h>

void printBinary(int num) {
    int binary[8] = {0};
    int i = 0;
    
    // Convert to binary (stored in reverse order)
    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    
    // Print in correct order (8 bits)
    for (int j = 7; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int number;

    printf("Enter a number between 0 and 255: ");
    scanf("%d", &number);

    if (number < 0 || number > 255) {
        printf("Error: Number must be between 0 and 255\n");
        return 1;
    }

    printf("Binary equivalent of %d: ", number);
    printBinary(number);
    printf("\n");

    return 0;
}