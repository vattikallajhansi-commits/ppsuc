#include <stdio.h>

int main() {
    int n, i;
    
    // Read size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find last odd number
    for(i = n - 1; i >= 0; i--) {
        if(arr[i] % 2 != 0) {
            printf("%d", arr[i]);
            break;
        }
    }
    
    return 0;
}

