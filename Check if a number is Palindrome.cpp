#include <stdio.h>
int main() {
    int N, temp, rev = 0, digit;
    scanf("%d", &N);
    temp = N;
    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if(rev == N)
        printf("YES");
    else
        printf("NO");
    return 0;
}

