#include <stdio.h>

// 判断是否为闰年
int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// 检查输入日期的有效性
int isValidDate(int year, int month, int date) {
    if (year < 1990 || month < 1 || month > 12 || date < 1 || date > 31)
        return 0;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) daysInMonth[1] = 29;
    return date <= daysInMonth[month - 1];
}

int main() {
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, date, totalDays = 0, leapYears = 0;
    scanf("%d-%d-%d", &year, &month, &date);

    // 计算输入日期之前的天数
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += date;

    // 计算闰年天数
    for (int i = 1990; i < year; i++) {
        leapYears += isLeapYear(i);
    }

    // 计算总天数
    totalDays += (year - 1990) * 365 + leapYears;

    // 处理闰年2月29日的特殊情况
    if (isLeapYear(year) && month == 2 && date == 29) {
        totalDays++;
    }

    // 判断工作还是休息
    int dayOfWeek = totalDays % 5;
    if (isValidDate(year, month, date)) {
        if (dayOfWeek <= 3) {
            printf("He is working\n");
        } else {
            printf("He is having a rest\n");
        }
    } else {
        printf("Invalid input\n");
    }

    return 0;
}