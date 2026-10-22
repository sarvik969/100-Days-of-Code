 #include <stdio.h>

int main()
{
    int n, temp, rem, digits = 0;
    int sum = 0, power, i;

    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= digits; i++)
            power = power * rem;

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}