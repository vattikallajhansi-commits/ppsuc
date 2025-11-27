#include <stdio.h>

int main() {
    int h, s, p;
    scanf("%d %d %d", &h, &s, &p);

    int c1 = (h > 50);
    int c2 = (s > 60);
    int c3 = (p > 100);

    if (c1 && c2 && c3)
        printf("10");
    else if (c1 && c2)
        printf("9");
    else if (c2 && c3)
        printf("8");
    else if (c1 && c3)
        printf("7");
    else if (c1 || c2 || c3)
        printf("6");
    else
        printf("5");

    return 0;
}

