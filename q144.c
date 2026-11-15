
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[100], temp;
    int n, i, j;

    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of students\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].marks < s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
