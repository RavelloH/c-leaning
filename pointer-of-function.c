// 函数指针

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    // 定义一个函数指针
    int (*p)(int, int) = add;
    printf("%d\n", p(1, 2));
    // 指向另一个函数
    p = sub;
    printf("%d\n", p(1, 2));
    return 0;
}