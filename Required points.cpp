#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    // Calculate number of special attacks
    int attacks = B / A;

    printf("%d", attacks);
    return 0;
}

