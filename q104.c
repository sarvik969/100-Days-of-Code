#include <stdio.h>

int main() {
    int n, ans = -1;
    scanf("%d", &n);

    for(int x = 1; x <= n; x++) {
        int left = 0, right = 0;

        for(int i = 1; i <= x; i++)
            left += i;

        for(int i = x; i <= n; i++)
            right += i;

        if(left == right) {
            ans = x;
            break;
        }
    }

    printf("%d", ans);
    return 0;
}