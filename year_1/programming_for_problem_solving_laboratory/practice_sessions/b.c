#include <stdio.h>

int main() {
    // Variables of different types
    int intVal;
    float floatVal;
    double doubleVal;
    char charVal;

    printf("=== Data Type Conversion Program ===\n\n");

    // Read an integer from user
    printf("Enter an integer: ");
    scanf("%d", &intVal);

    // Automatic (implicit) conversion examples
    floatVal = intVal;      // int to float auto conversion
    doubleVal = floatVal;   // float to double auto conversion

    printf("\n=== Automatic Conversion Results ===\n");
    printf("int to float: %d → %.2f\n", intVal, floatVal);
    printf("float to double: %.2f → %.2lf\n", floatVal, doubleVal);

    // Read a float from user
    printf("\nEnter a float: ");
    scanf("%f", &floatVal);

    // Explicit type casting examples
    intVal = (int)floatVal;         // float to int casting (truncates)
    charVal = (char)intVal;         // int to char casting
    doubleVal = (double)floatVal;   // float to double casting

    printf("\n=== Explicit Casting Results ===\n");
    printf("float to int: %.2f → %d (truncated)\n", floatVal, intVal);
    printf("int to char: %d → %c (ASCII character)\n", intVal, charVal);
    printf("float to double: %.2f → %.2lf\n", floatVal, doubleVal);

    // Mixed-type expression with auto conversion
    printf("\n=== Mixed-Type Expression ===\n");
    double result = intVal + floatVal * doubleVal;
    printf("%d + %.2f * %.2lf = %.2lf (auto-converted to double)\n", 
           intVal, floatVal, doubleVal, result);

    // Character to numeric conversion
    printf("\nEnter a character: ");
    scanf(" %c", &charVal);  // Note the space before %c to skip whitespace

    printf("\n=== Character Conversion ===\n");
    printf("char to int: '%c' → %d (ASCII value)\n", charVal, (int)charVal);
    printf("char to float: '%c' → %.2f\n", charVal, (float)charVal);

    return 0;
}