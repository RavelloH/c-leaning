// 凯撒密码
#include <stdio.h>

int main()
{
    char str[100];
    int n;
    scanf("%d", &n);
    getchar();
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + n) % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' + n) % 26 + 'A';
        }
    }
    puts(str);
    return 0;
}