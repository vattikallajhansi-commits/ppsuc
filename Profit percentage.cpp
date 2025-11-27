#include <stdio.h>

int main() {
    int CP, SP;
    double profitPercentage;

    scanf("%d %d", &CP, &SP);

    profitPercentage = ((double)(SP - CP) / CP) * 100;

    printf("%.2lf", profitPercentage);

    return 0;
}

