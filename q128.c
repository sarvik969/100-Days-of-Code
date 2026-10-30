
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch, vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower((unsigned char)ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' ||
                ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
