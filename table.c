// 输入2值，输出相应大小的表格

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%3.d ", i * j);
        }
        printf("\n");
    }
    return 0;
}