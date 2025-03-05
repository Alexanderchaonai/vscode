#include <stdio.h>

#define MAX_EMPLOYEES 10

// 输入职工数据
void input_data(char uid[10][5], int salary[10], int csalary[10], int revenue[10], int _water_electricity[10], int _deductions[10]) {
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        scanf("%s %d %d %d %d %d", uid[i], &salary[i], &csalary[i], &revenue[i], &_water_electricity[i], &_deductions[i]);
    }
}

// 计算应发工资、扣款合计和实发工资
void calculate(char uid[10][5], int salary[10], int csalary[10], int revenue[10], 
               int _water_electricity[10], int _deductions[10], 
               int t_salary[10], int deduction_count[10], int r_salary[10]) {
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        // 应发工资 = 岗位工资 + 薪级工资 + 其他补贴
        t_salary[i] = salary[i] + csalary[i] + revenue[i];
        // 扣款合计 = 水电费 + 其他扣款
        deduction_count[i] = _water_electricity[i] + _deductions[i];
        // 实发工资 = 应发工资 - 扣款合计
        r_salary[i] = t_salary[i] - deduction_count[i];
    }
}

// 打印输入的原始数据
void print_data(char uid[10][5], int salary[10], int csalary[10], int revenue[10], 
                int _water_electricity[10], int _deductions[10]) {
    printf("代号：    岗位工资：薪级工资：其他补贴：水电费：  其他扣款：\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("%-8s %-10d %-10d %-10d %-10d %-10d\n",
               uid[i], salary[i], csalary[i], revenue[i],
               _water_electricity[i], _deductions[i]);
    }
}

int main()
{
    char uid[10][5];
    int salary[10], csalary[10], revenue[10];
    int _water_electricity[10], _deductions[10];
    int t_salary[10], deduction_count[10], r_salary[10];

    // 1. 输入数据
    input_data(uid, salary, csalary, revenue, _water_electricity, _deductions);

    // 2. 打印原始数据
    print_data(uid, salary, csalary, revenue, _water_electricity, _deductions);

    printf("\n");  // 分隔空行

    // 3. 计算工资
    calculate(uid, salary, csalary, revenue, _water_electricity, _deductions,
              t_salary, deduction_count, r_salary);

    // 4. 打印计算结果
    printf("代号：    岗位工资：薪级工资：其他补贴：水电费：  其他扣款：应发工资：扣款合计：实发工资：\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("%-8s %-10d %-10d %-10d %-10d %-10d %-10d %-10d %-10d\n",
               uid[i],              // 代号
               salary[i],           // 岗位工资
               csalary[i],          // 薪级工资
               revenue[i],          // 其他补贴
               _water_electricity[i],  // 水电费
               _deductions[i],         // 其他扣款
               t_salary[i],            // 应发工资
               deduction_count[i],     // 扣款合计
               r_salary[i]             // 实发工资
        );
    }

    return 0;
}