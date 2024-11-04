#include <stdio.h>
int main() {
    int i, j, n = 10;
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < (i < n ? n - 1 - i : i - n + 1); j++) printf(" ");
        for (j = 0; j < (i < n ? 2 * i + 1 : 2 * (2 * n - 2 - i) + 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}