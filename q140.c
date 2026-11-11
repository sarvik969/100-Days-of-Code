
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    scanf("%49s", p.name);
    scanf("%19s", input);

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    }
    else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    }
    else if (strcmp(input, "OTHER") == 0) {
        p.gender = OTHER;
    }
    else {
        printf("Invalid gender\n");
        return 1;
    }

    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;

        case FEMALE:
            printf("Gender: Female\n");
            break;

        case OTHER:
            printf("Gender: Other\n");
            break;
    }

    return 0;
}
