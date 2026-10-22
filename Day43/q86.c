#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, len, palindrome = 1;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    len = strlen(s);

    for(i = 0; i < len/2; i++) {
        if(s[i] != s[len-1-i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}