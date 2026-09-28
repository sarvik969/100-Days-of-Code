#include <stdio.h>

int main()
{
    long long n, temp, result = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("%lld", result);

    return 0;
}