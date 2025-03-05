#include <stdio.h>

int main()
{
    //注意：char字符数据类型只能定义ASCII码表中的字母，数据，英文符号，同时只占1个字节
char c='a';
printf("%c\n",c);

char c1='1';
printf("%c\n",c1);

printf("%zu\n",sizeof(c));

}