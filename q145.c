
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];
}

int main() {
    struct Student s[100], topStudent;
    int n, i;

    scanf("%d", &n);

    if (n < 1 || n > 100) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%49s %d %d",
              s[i].name,
              &s[i].roll,
              &s[i].marks);
    }

    topStudent = findTopStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topStudent.name,
           topStudent.roll,
           topStudent.marks);

    return 0;
}
