 
#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND = 20,
    THIRD = 30
};

int main() {
    enum Numbers num1 = FIRST;
    enum Numbers num2 = SECOND;
    enum Numbers num3 = THIRD;

    printf("FIRST = %d\n", num1);
    printf("SECOND = %d\n", num2);
    printf("THIRD = %d\n", num3);

    return 0;
}
