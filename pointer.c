// C 指针实例

#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    // *p 代表 p 指向的值
    // &a 代表 a 的地址
    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}