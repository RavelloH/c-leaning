// 结构体 示例
#include <stdio.h>

// 定义结构体
struct Student {
    char name[20];
    int age;
    int score;
};

int main() {
    // 初始化结构体
    struct Student s = {"Tom", 18, 100};
    printf("%s %d %d\n", s.name, s.age, s.score);

    // 修改结构体成员
    s.age = 20;
    s.score = 99;
    printf("%s %d %d\n", s.name, s.age, s.score);

    // 结构体数组
    struct Student students[3] = {
        {"Tom", 18, 100},
        {"Jerry", 19, 98},
        {"Spike", 20, 97}
    };
    for (int i = 0; i < 3; i++) {
        printf("%s %d %d\n", students[i].name, students[i].age, students[i].score);
    }

    // 指针
    struct Student *p = &s;
    printf("%s %d %d\n", p->name, p->age, p->score);

    // 大小
    printf("%lu\n", sizeof(struct Student));
    return 0;
}