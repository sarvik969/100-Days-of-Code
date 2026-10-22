#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int i, capitalize = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (capitalize && isalpha(ch)) {
            str[i] = toupper(ch);
            capitalize = 0;
        }
        else {
            str[i] = tolower(ch);
        }

        if (str[i] == '.' ||
            str[i] == '!' ||
            str[i] == '?') {
            capitalize = 1;
        }
    }

    printf("%s", str);

    return 0;
}