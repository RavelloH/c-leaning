//  指针数组

#include <stdio.h>

int main() {
    char *names[] = {
        "Tom",
        "Jerry",
        "Spike",
        "Tyke"
    };
    for (int i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}