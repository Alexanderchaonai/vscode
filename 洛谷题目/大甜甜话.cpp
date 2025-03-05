#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 函数：将数字各位相加
int sum_of_digits(int num) {
int sum = 0;
while (num > 0) {
sum += num % 10;
       num /= 10;
    }
    return sum;
}

int main() {
    char input[100];
    int number;
       
// 从用户输入读取数字
    
    scanf("%s", input);
    
    // 将字符串转换为整数
    number = atoi(input);
    
    // 重复将数字各位相加直到数字小于10
    while (number >= 10) {
       number = sum_of_digits(number);
    }
    
    // 判断最后的数字是否为7
    if (number == 7) {
       printf("Yes\n");
    } else {
       printf("No\n");
    }
    
    return 0;
}