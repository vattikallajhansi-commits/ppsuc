#include <stdio.h>
#include <math.h>

int main() {
    int X, Y;
    double hypotenuse;

    // Read input values
    scanf("%d %d", &X, &Y);

    // Calculate hypotenuse
    hypotenuse = sqrt((X * X) + (Y * Y));

    // Print result with 2 decimal places
    printf("%.2lf", hypotenuse);

    return 0;
}

