#include <stdio.h>

int main() {
    int num1, num2;

    // Read input
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations
    printf("Sum:%d\n", num1 + num2);
    printf("Difference:%d\n", num1 - num2);
    printf("Product:%d\n", num1 * num2);
    printf("Quotient:%d\n", num1 / num2);
    printf("Remainder:%d\n", num1 % num2);

    return 0;
}

