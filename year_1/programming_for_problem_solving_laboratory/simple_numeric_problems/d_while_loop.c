#include <stdio.h>

int main() {
    int number, rows, i = 1;

    printf("Enter the number for multiplication table: ");
    scanf("%d", &number);
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nMultiplication Table for %d:\n", number);
    while(i <= rows) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}