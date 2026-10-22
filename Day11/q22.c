#include <stdio.h>

int main() {
    float cp, sp, per;
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        per = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", per);
    }
    else if (cp > sp) {
        per = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", per);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}