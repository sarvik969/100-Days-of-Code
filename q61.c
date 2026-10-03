#include <stdio.h>

int main() {
    int n, a[100], key, i, found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("%d", found);
    else
        printf("-1");

    return 0;
}