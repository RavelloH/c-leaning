// C 指针计算

#include <stdio.h>

int main() {
    char hello[] = "hello, world";
    char *p = hello;
    printf("%c\n", *p);
    //  加法递增，输出每个字符
    for (int i = 0; i < 12; i++) {
        printf("%c", *(p + i));
    }
    printf("\n");
    return 0;
}