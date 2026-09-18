#include <stdio.h>

int main()
{
    int lower, upper;
    int n, temp, digit, reverse;
    int count = 0;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    for(n = lower; n <= upper; n++)
    {
        temp = n;
        reverse = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if(reverse == n)
        {
            printf("%d ", n);
            count++;
        }
    }

    printf("\nTotal palindrome numbers = %d", count);

    return 0;
}