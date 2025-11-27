#include <stdio.h>

int main() {
    char s[10005];
    int count = 0, i;
    
    // Read full line including spaces
    fgets(s, sizeof(s), stdin);
    
    // Count words
    for (i = 0; s[i] != '\0'; i++) {
        if ((i == 0 && s[i] != ' ' && s[i] != '\n') ||
            (s[i] != ' ' && s[i] != '\n' && s[i - 1] == ' ')) {
            count++;
        }
    }
    
    // Print word count
    printf("%d", count);
    
    return 0;
}

