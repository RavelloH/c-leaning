// 输入n个整数，统计其中奇数和偶数的个数
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
    printf("odd:%d\neven:%d\n", odd, even);
    return 0;

}