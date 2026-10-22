#include <stdio.h>

int main() {
    int n, a[100], key;
    int low, high, mid, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("%d", mid);
            return 0;
        }

        if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("-1");

    return 0;
}