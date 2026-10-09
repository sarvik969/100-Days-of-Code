#include <stdio.h>

int main() {
    char s[300];
    int i = 0;
    int start = 0, len = 0;
    int maxStart = 0, maxLen = 0;

    fgets(s, sizeof(s), stdin);

    while(1) {
        if(s[i] != ' ' && s[i] != '\0' && s[i] != '\n') {
            if(len == 0)
                start = i;

            len++;
        }
        else {
            if(len > maxLen) {
                maxLen = len;
                maxStart = start;
            }

            len = 0;

            if(s[i] == '\0' || s[i] == '\n')
                break;
        }

        i++;
    }

    for(i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", s[i]);

    return 0;
}
