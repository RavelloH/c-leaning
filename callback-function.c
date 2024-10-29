// 回调函数

#include <stdio.h>

void print(int a) {
    printf("%d\n", a);
}

// 回调函数
// 参数 a 为整数，p 为函数指针
void callback(int a, void (*p)(int)) {
    p(a);
}

// 上面也可以写成
// void callback(int a, void print(int)) {
//     print(a);
// }

int main() {
    callback(10, print);
    return 0;
}