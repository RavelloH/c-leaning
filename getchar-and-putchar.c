// getchar() and putchar()

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: ");
    putchar(c);
    printf("\n");
    return 0;
}