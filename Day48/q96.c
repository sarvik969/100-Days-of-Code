#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    int i, start = 0, end;
    char temp;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for(i = 0; ; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            end = i - 1;

            while(start < end) {
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;

                start++;
                end--;
            }

            if(s[i] == '\0')
                break;

            start = i + 1;
        }
    }

    printf("%s", s);

    return 0;
}