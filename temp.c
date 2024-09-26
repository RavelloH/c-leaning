// 计算
#include <stdio.h>
#include <math.h>

int main()
{
    double sum;
    int n,i;
    printf("N = ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++) {
        sum += (i)/(i*2-1) * pow(-1, i+1);
    }
    printf("sum: %f\n",sum);
    return 0;
}