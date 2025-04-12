#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;

    // Input three numbers from user
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find maximum number
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Find minimum number
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    // Display results
    printf("\nMaximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}