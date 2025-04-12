#include <stdio.h>

int main() {
    float percentage;
    
    // Input percentage from user
    printf("Enter your percentage of marks: ");
    scanf("%f", &percentage);
    
    // Validate input
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
        return 1; // Exit with error code
    }
    
    // Determine class awarded
    printf("\nClass Awarded: ");
    if (percentage < 40) {
        printf("Failed\n");
    } 
    else if (percentage >= 40 && percentage < 60) {
        printf("Second Class\n");
    } 
    else if (percentage >= 60 && percentage < 70) {
        printf("First Class\n");
    } 
    else {
        printf("Distinction\n");
    }
    
    return 0;
}