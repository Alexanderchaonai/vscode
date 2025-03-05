//需求：键盘录入一个字符串，使用程序实现在控制台遍历该字符串
#include<stdio.h>

int main()
{
    char str[100];
    printf("请输入一个字符串\n");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}

//也可以用指针遍历
/*int main()
{
    char str[100];
    printf("请输入一个字符串\n");
    scanf("%s",str);
    char c=*p;
    while(1)
    {
    if(c=='\0')
    {
        break;
    }
    print("%c\n",c);
    p++;
    }
}*/