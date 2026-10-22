#include <stdio.h>

int main()
{
    int n, temp, rem, i;
    int fact, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;

        fact = 1;

        for(i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;

        temp = temp / 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}