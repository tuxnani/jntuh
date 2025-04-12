#include <stdio.h>

int main() {
    int number, rows;

    // Input the number and rows from user
    printf("Enter the number for multiplication table: ");
    scanf("%d", &number);
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the multiplication table
    printf("\nMultiplication Table for %d:\n", number);
    for(int i = 1; i <= rows; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}