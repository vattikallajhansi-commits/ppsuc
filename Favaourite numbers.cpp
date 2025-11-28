#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);

    // Check Alice's condition: even and multiple of 7
    if (A % 2 == 0 && A % 7 == 0) {
        printf("Alice");
    }
    // Check Bob's condition: odd and multiple of 9
    else if (A % 2 != 0 && A % 9 == 0) {
        printf("Bob");
    }
    // If neither Alice nor Bob likes the number
    else {
        printf("Charlie");
    }

    return 0;
}

