#include <stdio.h>
#include <math.h>
int main() {
    int N, flag = 1;
    scanf("%d", &N);
    if(N <= 1) flag = 0;
    for(int i = 2; i <= sqrt(N); i++) {
        if(N % i == 0) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("YES");
    else printf("NO");
    return 0;
}

