#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("info.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);

    fclose(file);

    printf("Text appended successfully!\n");

    return 0;
}