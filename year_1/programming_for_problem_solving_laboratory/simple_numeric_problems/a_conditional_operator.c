#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find max using nested ternary operators
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    // Find min using nested ternary operators
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("\nMaximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}