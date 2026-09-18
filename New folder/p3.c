#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Kilometres to Miles\n");
    printf("3. Kilograms to Pounds\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    if(value < 0)
    {
        printf("Invalid value");
        return 0;
    }

    switch(choice)
    {
        case 1:
            result = (value * 9 / 5) + 32;
            printf("%.2f Fahrenheit", result);
            break;

        case 2:
            result = value * 0.621371;
            printf("%.2f Miles", result);
            break;

        case 3:
            result = value * 2.20462;
            printf("%.2f Pounds", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}