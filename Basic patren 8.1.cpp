#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        if (i == mid)
            printf("%d\n", i);
        else
            printf("%d %d\n", i, i);
    }

    return 0;
}

