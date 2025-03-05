/*strlen:获取字符串的长度  len(略过\0)
strcat:拼接两个字符串    
strcpy：复制字符串
strcmp：比较两个字符串   compare
strlwr：将字符串变成大小写   lower
strupr：将字符串变成大写     upper
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char* str1="abc";//底层会把字符数组放在只读常量区(只能读，不能修改；里面的字符串会复用)
    char str2[100]="Abc";
    char str3[5]={'q','w','e','r','\0'};//字符数组

    //细节1：strlen在统计长度的时候是不计算结束标记的
    //细节2：在Windows操作系统中，一个中文占两个字节
    int len1=strlen(str1);//3
    int len2=strlen(str2);//3
    int len3=strlen(str3);//4

    printf("%d\n",len1);
    printf("%d\n",len2);
    printf("%d\n",len3);
printf("-----------------------------------------------------\n");



//拼接细节1：把第二个字符串中全部的内容，拷贝到第一个字符串的末尾
//      前提1：第一个字符串是可以被修改的
//      前提2：第一个字符串中剩余的空间可以容纳拼接的字符串
    strcat(str2,str3);
    printf("%s\n",str2);//abcqwer
    printf("%s\n",str3);//qwer

printf("---------------------------------------------------\n");

//复制细节1:把第二个字符串中全部的内容，拷贝到第一个字符串中，把第一个字符里面原有的内容覆盖了
//      前提1：第一个字符串是可以被修改的
//      前提2：第一个字符串中所有的空间可以容纳复制进去的字符串
    strcpy(str2,str3);
    printf("%s\n",str2);//qwer
    printf("%s\n",str3);//qwer

    printf("----------------------------------------------\n");
//比较细节1：如果完全一样，就会返回0，只要有一个不一样，就会返回非0
//比较细节2：要求顺序和内容完全一致

    int res=strcmp(str1,str2);
    printf("%d\n",res);
    printf("------------------------------------------------\n");

}

