#include<stdio.h>

int main() {
    int a, b;
    scanf_s("%d %d", &a, &b);
    for (int num = a; num <= b; num++) {
        int ge = num % 10;
        int shi = num / 10 % 10;
        int bai = num / 100 % 10;
        int qian = num / 1000;

        if (ge < 1 || ge > 9 || shi < 1 || shi > 9 || bai < 1 || bai > 9 || qian < 1 || qian > 9) continue;

        if (ge < shi && shi < bai && bai < qian &&
            qian % bai != 0 && bai % shi != 0 && shi % ge != 0 &&
            !(ge % 2 == 0 && shi % 2 == 0 && bai % 2 == 0 && qian % 2 == 0) &&
            !(ge % 2 == 1 && shi % 2 == 1 && bai % 2 == 1 && qian % 2 == 1)) {
            printf("%d\n", num);
        }
    }
    return 0;
}