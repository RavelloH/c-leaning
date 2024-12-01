#include <stdio.h>
// 判断是否为闰年
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}
int dayOfYear(int year, int month, int day) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayOfYear = 0;
    
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    
    for (int i = 0; i < month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;
    return dayOfYear;
}
int main() {
    int year, month, day;
    
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);
    
    int result = dayOfYear(year, month, day);
    printf("The date %d-%d-%d is the %dth day of the year %d.\n", year, month, day, result, year);
    
    return 0;
}