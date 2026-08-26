#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, newSentence = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (newSentence && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            newSentence = 0;
        }
        else {
            str[i] = tolower((unsigned char)str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1;
        }
    }

    printf("%s", str);

    return 0;
}