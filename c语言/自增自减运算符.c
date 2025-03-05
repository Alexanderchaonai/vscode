#include<stdio.h>
#include<string.h>

int main()
{
      char* str1="abc";//底层会把字符数组放在只读常量区(只能读，不能修改；里面的字符串会复用)
      char str2[5]="Abc";
      strlwr(str2);
      printf("%s\n",str2);
    
    
    
    
    }