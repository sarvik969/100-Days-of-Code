#include <stdio.h>

int main() {
    int days;
    float fine;
    scanf("%d", &days);

    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = 5*2 + (days-5)*4;
    else if (days <= 30)
        fine = 5*2 + 5*4 + (days-10)*6;
    else {
        printf("Membership Cancelled");
        return 0;
    }

    printf("Fine = %.2f", fine);
    return 0;
}