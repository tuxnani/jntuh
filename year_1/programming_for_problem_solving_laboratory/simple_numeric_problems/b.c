#include <stdio.h>
#include <math.h> // For pow() function used in compound interest

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
    int compounding_frequency;

    // Input values from user
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    printf("Enter compounding frequency per year (for compound interest, 1 for annual): ");
    scanf("%d", &compounding_frequency);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate compound interest
    float r = rate / 100; // Convert percentage to decimal
    int n = compounding_frequency;
    compound_interest = principal * pow(1 + (r/n), n * time) - principal;

    // Display results with formulas
    printf("\n--- CALCULATION RESULTS ---\n");
    printf("Principal (P): %.2f\n", principal);
    printf("Annual Rate (R): %.2f%%\n", rate);
    printf("Time (T): %.2f years\n", time);
    printf("Compounding Frequency (n): %d times per year\n\n", compounding_frequency);

    printf("SIMPLE INTEREST:\n");
    printf("Formula: SI = (P × R × T) / 100\n");
    printf("Simple Interest = (%.2f × %.2f × %.2f) / 100 = %.2f\n\n", 
           principal, rate, time, simple_interest);

    printf("COMPOUND INTEREST:\n");
    printf("Formula: CI = P × (1 + R/n)^(n×T) - P\n");
    printf("Compound Interest = %.2f × (1 + %.4f/%d)^(%d×%.2f) - %.2f = %.2f\n", 
           principal, r, n, n, time, principal, compound_interest);

    printf("\n--- SUMMARY ---\n");
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount (Simple): %.2f\n", principal + simple_interest);
    printf("Total Amount (Compound): %.2f\n", principal + compound_interest);

    return 0;
}