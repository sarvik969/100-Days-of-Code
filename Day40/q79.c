#include <stdio.h>

int main() {
    int a[20][20], n, i, j, s;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(s = 0; s <= 2*(n-1); s++) {
        for(i = 0; i < n; i++) {
            j = s - i;

            if(j >= 0 && j < n)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}