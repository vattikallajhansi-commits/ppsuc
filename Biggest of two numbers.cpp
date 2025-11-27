#include <stdio.h>

int main() {
    int A, B;
    
    scanf("%d", &A);
    scanf("%d", &B);

    if (A > B)
        printf("%d", A);
    else
        printf("%d", B);

    return 0;
}

