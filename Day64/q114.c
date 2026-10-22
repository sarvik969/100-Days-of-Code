
#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    int last[256];
    int i, start = 0, maxLen = 0;

    scanf("%9999s", s);

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        int len = i - start + 1;

        if (len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);

    return 0;
}
