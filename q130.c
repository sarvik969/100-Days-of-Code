#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int roll, marks, n, i;

    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(file, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(file);

    return 0;
}