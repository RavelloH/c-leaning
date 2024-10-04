// 生成乘方表
#include<stdio.h>
double powerd(int x,int n) {
    double result = x;
    for (int i=0;i<=n;i++) {
        result = result * x;
    }
    return result;
}

int main(void) {
    int x,n;
    printf("Type x :");
    scanf("%d",&x);
    printf("Type n :");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        double temp = powerd(x,i);
        printf("pow(%d,%d)=%0.f\n",x,i,temp);
    }

}

