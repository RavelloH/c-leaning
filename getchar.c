// 演示getchar()函数的使用
// 读取用户输入的字符，直到输入的字符为EOF，然后输出输入的字符

#include <stdio.h>

int main(void)
{
    // 读取用户输入的字符，直到输入的字符为EOF
    // EOF是End Of File的缩写，表示文件结束, 在终端输入Ctrl+D可以输入EOF
    int ch;
    while ((ch = getchar()))
    {
        // 输出输入的字符
        putchar(ch);
    }
    return 0;
}