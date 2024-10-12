// 演示getchar()函数的使用
// 读取用户输入的字符，直到输入的字符为EOF，然后输出输入的字符

#include <stdio.h>

int main(void)
{
    int ch;
    while ((ch = getchar()))
    {
        putchar(ch);
    }
    return 0;
}