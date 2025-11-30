#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A + B;
    int result = sum * 10 + 1;

    printf("%d", result);
    return 0;
}

