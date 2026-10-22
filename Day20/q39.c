#include <stdio.h>

int main()
{
    int n, rem, product = 1;
    int found = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;

        if(rem % 2 != 0)
        {
            product = product * rem;
            found = 1;
        }

        n = n / 10;
    }

    if(found)
        printf("%d", product);
    else
        printf("No odd digit");

    return 0;
}