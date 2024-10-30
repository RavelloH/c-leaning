#include <stdio.h>
#include <string.h> // 添加这个头文件

// 定义共用体
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10101;
    data.f = 1010101.1;
    strcpy(data.str, "The last one");

    // 只有str会输出正确的值, 因为str是最后一个赋值的, 其他的会被覆盖
    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);
}
