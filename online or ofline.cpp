#include <stdio.h>

int main() {
    int N, M;
    
    // Read input
    scanf("%d %d", &N, &M);
    
    // Calculate online price after 10% discount
    float online_price = N * 0.9;
    
    // Compare prices
    if (online_price < M) {
        printf("ONLINE");
    } else if (online_price > M) {
        printf("DINING");
    } else {
        printf("EITHER");
    }
    
    return 0;
}

