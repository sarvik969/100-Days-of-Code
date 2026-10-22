#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];

    scanf("%99s", a);
    scanf("%99s", b);

    if(strlen(a) != strlen(b)) {
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}