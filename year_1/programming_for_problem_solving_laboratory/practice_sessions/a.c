#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integer values (space separated): ");
    scanf("%d %d", &a, &b);
    
    printf("\n=== Arithmetic Operators ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    
    printf("\n=== Relational Operators ===\n");
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    
    printf("\n=== Logical Operators ===\n");
    printf("%d && %d = %d\n", a, b, a && b);
    printf("%d || %d = %d\n", a, b, a || b);
    printf("!%d = %d\n", a, !a);
    
    printf("\n=== Bitwise Operators ===\n");
    printf("%d & %d = %d\n", a, b, a & b);  // AND
    printf("%d | %d = %d\n", a, b, a | b);  // OR
    printf("%d ^ %d = %d\n", a, b, a ^ b);  // XOR
    printf("~%d = %d\n", a, ~a);            // NOT
    printf("%d << 1 = %d\n", a, a << 1);    // Left shift
    printf("%d >> 1 = %d\n", a, a >> 1);    // Right shift
    
    printf("\n=== Assignment Operators ===\n");
    int c = a;
    printf("c = %d (after c = a)\n", c);
    c += b; printf("c += %d → c = %d\n", b, c);
    c -= b; printf("c -= %d → c = %d\n", b, c);
    c *= b; printf("c *= %d → c = %d\n", b, c);
    c /= b; printf("c /= %d → c = %d\n", b, c);
    c %= b; printf("c %%= %d → c = %d\n", b, c);
    c &= b; printf("c &= %d → c = %d\n", b, c);
    c |= b; printf("c |= %d → c = %d\n", b, c);
    c ^= b; printf("c ^= %d → c = %d\n", b, c);
    c <<= 1; printf("c <<= 1 → c = %d\n", c);
    c >>= 1; printf("c >>= 1 → c = %d\n", c);
    
    printf("\n=== Increment/Decrement Operators ===\n");
    c = a;
    printf("Initial c = %d\n", c);
    printf("c++ = %d (now c = %d)\n", c++, c);
    printf("++c = %d\n", ++c);
    printf("c-- = %d (now c = %d)\n", c--, c);
    printf("--c = %d\n", --c);
    
    printf("\n=== Conditional Operator ===\n");
    printf("%d > %d ? %d : %d = %d\n", a, b, a, b, (a > b ? a : b));
    
    printf("\n=== Comma Operator ===\n");
    int result = (a += 5, b += 10, a + b);
    printf("(a += 5, b += 10, a + b) = %d (a = %d, b = %d)\n", result, a, b);
    
    printf("\n=== Sizeof Operator ===\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of a: %zu bytes\n", sizeof(a));
    
    return 0;
}