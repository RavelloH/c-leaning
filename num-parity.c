
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