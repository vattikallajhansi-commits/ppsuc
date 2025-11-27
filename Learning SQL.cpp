#include <stdio.h>

int main() {
    int R, C, E;

    // Read input values
    scanf("%d %d %d", &R, &C, &E);

    // Calculate total cells
    int totalCells = (R + E) * C;

    // Print result
    printf("%d", totalCells);

    return 0;
}

