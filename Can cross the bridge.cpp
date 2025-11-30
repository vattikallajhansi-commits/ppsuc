#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    int maxMangoes = (Z - Y) / X;
    printf("%d", maxMangoes);

    return 0;
}

