#include<stdio.h>
int main() {
    float radius, area, circumference;
    float pi = 3.14;
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}