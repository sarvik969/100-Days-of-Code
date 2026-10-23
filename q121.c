#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved");

    return 0;
}