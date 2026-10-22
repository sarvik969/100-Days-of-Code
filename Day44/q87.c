#include <stdio.h>

int main() {
    char s[200];
    int i, spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(s[i] == ' ')
            spaces++;
        else if(s[i] >= '0' && s[i] <= '9')
            digits++;
        else if(!((s[i] >= 'a' && s[i] <= 'z') ||
                  (s[i] >= 'A' && s[i] <= 'Z')))
            special++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special = %d", special);

    return 0;
}