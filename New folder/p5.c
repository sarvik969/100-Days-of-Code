#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest, second;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] != largest)
        {
            if(found == 0 || a[i] > second)
            {
                second = a[i];
                found = 1;
            }
        }
    }

    printf("Largest = %d\n", largest);

    if(found)
        printf("Second largest = %d", second);
    else
        printf("All elements are equal");

    return 0;
}