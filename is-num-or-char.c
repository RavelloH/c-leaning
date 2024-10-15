// 输入一个字符，用ascii判断是否是数字或字母或其他

#include <stdio.h>

int main()
{
    char input;
    scanf("%c", &input);

    // 判断是否是数字
    if (input >= '0' && input <= '9')
    {
        printf("digit\n");
    }
    // 判断是否是字母
    else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
    {
        printf("char\n");
    }
    else
    {
        printf("other\n");
    }
    return 0;
}
