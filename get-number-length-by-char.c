// 输入一个数，统计它的位数
#include <stdio.h>

int main(void)
{
    long int number;
    char string[100];

    printf("Type a number:");
    scanf("%li", &number);

    // 把数字转换成字符串
    sprintf(string, "%li", number); 

    int digit = 0;

    // 计算字符串长度
    while (string[digit] != '\0')
    {
        digit++;
    }
    printf("Length:%i\n", digit);
    return 0;
}