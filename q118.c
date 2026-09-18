
#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
