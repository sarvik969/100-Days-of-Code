
#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[10];

    scanf("%9s", input);

    enum Month month;
    char *months[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    for (month = JAN; month <= DEC; month++) {
        if (strcmp(input, months[month]) == 0)
            break;
    }

    switch (month) {
        case FEB:
            printf("28 or 29 days");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;

        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}
