#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int max = a[i];

        for(int j = i; j < i + k; j++) {
            if(a[j] > max)
                max = a[j];
        }

        if(i > 0)
            printf(" ");

        printf("%d", max);
    }

    return 0;
}