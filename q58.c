#include <stdio.h>

int main() {
    int n, a[100], i, max, min;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\nMinimum = %d", max, min);

    return 0;
}