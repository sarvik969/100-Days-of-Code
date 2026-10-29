#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully!\n");

    return 0;
}