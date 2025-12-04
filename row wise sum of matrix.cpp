#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int a[N][M];

    // Read matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate and print row-wise sum
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            sum += a[i][j];
        }
        printf("%d ", sum);
    }

    return 0;
}

