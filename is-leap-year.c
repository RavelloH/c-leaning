// 判断是否为闰年

#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    // 闰年的判断条件
    // 1. 能被4整除但不能被100整除
    // 2. 能被400整除
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}