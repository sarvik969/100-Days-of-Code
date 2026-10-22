#include <stdio.h>

int main() {
    int n, ans = -1;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }

        if(count > n / 2) {
            ans = a[i];
            break;
        }
    }

    printf("%d", ans);
    return 0;
}