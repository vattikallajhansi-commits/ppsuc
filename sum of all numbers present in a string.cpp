#include <stdio.h>
#include <ctype.h>

int main() {
    char s[10005];
    scanf("%s", s);

    int sum = 0, num = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        } else {
            sum += num;
            num = 0;
        }
    }

    // Add last number if string ends with digit
    sum += num;

    printf("%d", sum);
    return 0;
}

