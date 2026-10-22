#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet");
    else if(ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Character");

    return 0;
}