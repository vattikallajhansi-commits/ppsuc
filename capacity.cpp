#include <stdio.h>

int main() {
    int T, S, B;
    scanf("%d %d %d", &T, &S, &B);

    int totalBytes = 2 * T * S * B * 512;
    int capacityKB = totalBytes / 1024;

    printf("%d KB", capacityKB);
    return 0;
}

