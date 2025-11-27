#include <stdio.h>

int main() {
    int a, b, c;

    // Read sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // Check type of triangle
    if (a == b && b == c) {
        printf("Equilateral triangle");
    }
    else if (a == b || a == c || b == c) {
        printf("Isosceles triangle");
    }
    else {
        printf("Scalene triangle");
    }

    return 0;
}

