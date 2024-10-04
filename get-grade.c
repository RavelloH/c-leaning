// 输入一个成绩，输出它的等级
// 90-100 A
// 80-89 B
// 70-79 C
// 60-69 D
// 0-59 E

#include <stdio.h>

int main()
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 90)
        printf("A\n");
    else if (grade >= 80)
        printf("B\n");
    else if (grade >= 70)
        printf("C\n");
    else if (grade >= 60)
        printf("D\n");
    else
        printf("E\n");
    return 0;
}
