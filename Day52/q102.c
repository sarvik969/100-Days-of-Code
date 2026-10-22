#include <stdio.h>

int main() {
    int n, a[100], x, i;
    int low, high, mid, ans = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = low + (high-low)/2;

        if(a[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("%d", ans);

    return 0;
}