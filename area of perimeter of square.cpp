#include <stdio.h>

int main() {
    int side;
    int area, perimeter;

    // Read side of the square
    scanf("%d", &side);

    // Calculate area and perimeter
    area = side * side;
    perimeter = 4 * side;

    // Print result
    printf("%d %d", area, perimeter);

    return 0;
}

