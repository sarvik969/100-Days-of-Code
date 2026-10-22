#include <stdio.h>

int main() {
    int d, m, y;

    scanf("%d/%d/%d", &d, &m, &y);

    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    if(m >= 1 && m <= 12)
        printf("%02d-%s-%04d", d, months[m], y);

    return 0;
}