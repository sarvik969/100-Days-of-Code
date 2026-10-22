#include <stdio.h>

int main() {
    char s[200];
    int freq[26] = {0};
    int i;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            freq[s[i]-'a']++;
    }

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z' &&
           freq[s[i]-'a'] > 1) {
            printf("%c", s[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}