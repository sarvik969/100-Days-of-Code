#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, maxDigit = 0;

    scanf("%lld", &n);

    if(n < 0)
        n = -n;

    if(n == 0)
        freq[0] = 1;

    while(n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for(i = 1; i < 10; i++) {
        if(freq[i] > freq[maxDigit])
            maxDigit = i;
    }

    printf("%d", maxDigit);

    return 0;
}