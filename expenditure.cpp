#include <stdio.h>

int main() {
    int X, Y;
    
    // Read input
    scanf("%d", &X);
    scanf("%d", &Y);
    
    // Check if total money is enough for 30 days
    if (X >= 30 * Y) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}

