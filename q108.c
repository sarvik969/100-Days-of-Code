#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int product = 1;

        for(int j = 0; j < n; j++) {
            if(i != j)
                product *= a[j];
        }

        if(i > 0)
            printf(" ");

        printf("%d", product);
    }

    return 0;
}