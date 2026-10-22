#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[100], i;
    int first = INT_MIN, second = INT_MIN;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] > first) {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}