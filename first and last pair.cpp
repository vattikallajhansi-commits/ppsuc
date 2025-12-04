#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int i = 0, j = N - 1;

    while (i <= j) {
        if (i == j) {
            // middle element when N is odd
            printf("%d 0 ", a[i]);
        } else {
            printf("%d %d ", a[i], a[j]);
        }
        i++;
        j--;
    }

    return 0;
}

