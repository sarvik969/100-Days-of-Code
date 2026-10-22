#include <stdio.h>

int main() {
    int n, a[100], k, i, j, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    k %= n;

    for(i = 0; i < k; i++) {
        temp = a[n-1];

        for(j = n-1; j > 0; j--)
            a[j] = a[j-1];

        a[0] = temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}