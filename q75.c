#include <stdio.h>

int main() {
    int a[20][20], b[20][20];
    int r, c, i, j;

    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);

        printf("\n");
    }

    return 0;
}