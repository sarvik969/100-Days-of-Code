#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    int maxSum = 0;

    for(int i = 0; i < k; i++)
        maxSum += a[i];

    for(int i = 1; i <= n - k; i++) {
        int sum = 0;

        for(int j = i; j < i + k; j++)
            sum += a[j];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}