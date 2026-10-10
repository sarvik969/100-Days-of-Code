#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, lastSpace = -1;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ')
            lastSpace = i;
    }

    printf("%c ", s[0]);

    for(i = 1; i < lastSpace; i++) {
        if(s[i-1] == ' ')
            printf("%c ", s[i]);
    }

    printf("%s", &s[lastSpace + 1]);

    return 0;
}