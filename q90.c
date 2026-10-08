#include <stdio.h>

int main() {
    char s[200];
    int i;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    printf("%s", s);

    return 0;
}