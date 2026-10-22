#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}