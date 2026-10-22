#include <stdio.h>

int main() {
    char s[200];
    int i;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        printf("%c\n", s[i]);

    return 0;
}