
#include <stdio.h>

int main() {
    int n, k, i, j, first;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        first = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first = arr[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}
