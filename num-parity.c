// 输入一堆数，判断奇偶个数
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("奇数个数：%d\n", odd);
    printf("偶数个数：%d\n", even);
    return 0;

}