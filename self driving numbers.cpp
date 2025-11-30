#include <stdio.h>

int main() {
    int n, temp, digit;
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0 || n % digit != 0) {
            printf("Not Self Dividing");
            return 0;
        }
        temp /= 10;
    }

    printf("Self Dividing");
    return 0;
}

