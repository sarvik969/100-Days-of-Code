#include <stdio.h>
#include <string.h>

int main() {
    char s[200], temp;
    int i, len;

    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    len = strlen(s);

    for(i = 0; i < len/2; i++) {
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("%s", s);

    return 0;
}