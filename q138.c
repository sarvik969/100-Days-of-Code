#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    const char *names[] = {
        "SUCCESS",
        "FAILURE",
        "TIMEOUT"
    };

    int i;

    for (i = SUCCESS; i <= TIMEOUT; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}