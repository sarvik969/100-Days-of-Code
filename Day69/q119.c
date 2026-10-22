#include <stdio.h>

int main() {
    int n, i, j, repeated = -1;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                repeated = a[i];
                break;
            }
        }

        if (repeated != -1)
            break;
    }

    printf("%d", repeated);

    return 0;
}