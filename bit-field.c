// 位域

#include <stdio.h>

// 定义位域结构体
// 位域结构体用于节省内存,格式:变量名:位数
// 位域结构体的成员只能是整型或字符型
// 位数表示所占的二进制位数，例如，位数为 3 表示该成员占 3 位二进制位，即 000~111 共 8 种状态，即 0~7
struct {
    unsigned int a:1;
    unsigned int b:3;
    unsigned int c:4;
} Flag;

int main() {
    Flag.a = 1;
    Flag.b = 7;
    Flag.c = 15;
    printf("%d %d %d\n", Flag.a, Flag.b, Flag.c);
    return 0;
}