#include <stdio.h>

// 判断闰年
int leapyear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        return 1;
    else
        return 0;
}

// 获取年份 y 的第 m-1 个月之前的总天数
int get_days_in_year(int y, int m) {
    int days = 0;
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (leapyear(y))
        month_days[1] = 29;
    for (int i = 0; i < m - 1; i++)
        days += month_days[i];
    return days;
}

// 计算从 1980 年 1 月 1 日到指定日期的总天数
int total_days(int y, int m, int d) {
    int days = 0;
    for (int i = 1980; i < y; i++) {
        days += 365;
        if (leapyear(i))
            days += 1;
    }
    days += get_days_in_year(y, m);
    days += d - 1; // 当天不满一天，不计入完整天数
    return days;
}

int main() {
    int y, m, d, h, min, s;
    double t;
    printf("请输入起始时间（年 月 日 时 分 秒）：\n");
    scanf("%d %d %d %d %d %d", &y, &m, &d, &h, &min, &s);
    printf("请输入时间间隔 t（秒）：\n");
    scanf("%lf", &t);

    // 计算起始时间距 1980 年 1 月 1 日的总秒数
    int days = total_days(y, m, d);
    double total_seconds = days * 24 * 3600 + h * 3600 + min * 60 + s + t;

    // 将总秒数转换回日期和时间
    int new_y = 1980;
    int seconds_in_day = 24 * 3600;
    while (total_seconds >= (leapyear(new_y) ? 366 : 365) * seconds_in_day) {
        total_seconds -= (leapyear(new_y) ? 366 : 365) * seconds_in_day;
        new_y++;
    }
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (leapyear(new_y))
        month_days[1] = 29;
    int new_m = 1;
    while (total_seconds >= month_days[new_m - 1] * seconds_in_day) {
        total_seconds -= month_days[new_m - 1] * seconds_in_day;
        new_m++;
    }
    int new_d = total_seconds / seconds_in_day + 1;
    total_seconds = (int)total_seconds % seconds_in_day;
    int new_h = total_seconds / 3600;
    total_seconds = (int)total_seconds % 3600;
    int new_min = total_seconds / 60;
    int new_s = (int)total_seconds % 60;

    printf("实际时间：%d年%d月%d日 %d时%d分%d秒\n", new_y, new_m, new_d, new_h, new_min, new_s);

    return 0;
}