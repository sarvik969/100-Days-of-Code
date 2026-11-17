
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    scanf("%d", &e.id);
    scanf("%49s", e.name);
    scanf("%f", &e.salary);

    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    printf("Employee ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("Joining Date: %02d/%02d/%04d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
