#include <stdio.h>

int main() {
    int N;
    long sum;
    
    // Read input
    scanf("%d", &N);
    
    // Calculate sum using formula
    sum = (long)N * (N + 1) / 2;
    
    // Print result
    printf("%ld", sum);
    
    return 0;
}

