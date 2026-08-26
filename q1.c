// Day 1 - C Programming Practice
//Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("the sum of %d and %d is %d", a, b, a + b);
    return 0;
}
