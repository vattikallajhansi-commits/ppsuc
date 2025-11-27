#include <stdio.h>
#include <string.h>

int main() {
    char s[10005], vowel;
    int i, found = 0;

    // Read the string
    scanf("%[^\n]s", s);
    getchar();              // to consume newline
    // Read the vowel
    scanf("%c", &vowel);

    // Search for the vowel in the string
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == vowel) {
            printf("True\n%d", i);
            found = 1;
            break;
        }
    }

    // If vowel not found
    if (!found) {
        printf("False");
    }

    return 0;
}

