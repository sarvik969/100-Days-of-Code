#include <stdio.h>

int main() {
    int n, a[100], i;
    int total = 0, left = 0, right;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for(i = 0; i < n; i++) {
        right = total - left - a[i];

        if(left == right) {
            printf("%d", i);
            return 0;
        }

        left += a[i];
    }

    printf("-1");

    return 0;
}