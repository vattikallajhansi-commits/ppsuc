#include <stdio.h>

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum1 = sumOfDivisors(a);
    int sum2 = sumOfDivisors(b);

    if (sum1 == b && sum2 == a)
        printf("Amicable");
    else
        printf("Not Amicable");

    return 0;
}

