#include <stdio.h>

int main() {
    char s[200];
    int i, j = 0;
    char ch;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        ch = s[i];

        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        if(!(ch=='a' || ch=='e' || ch=='i' ||
             ch=='o' || ch=='u')) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';

    printf("%s", s);

    return 0;
}