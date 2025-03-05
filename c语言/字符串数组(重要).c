//需求：定义一个数组存储5个学生的名字并遍历
#include<stdio.h>
int main()
{
    //1.定义一个二维数组，存储多个学生的名字
    char strArr[5][1000]=
    {
        "zhouyihao ",
        "chentong ",
        "liumuyang ",
        "shi",
        "shabi"
    };//相当于定义一个字符串组，因为名字肯定不只一个字母
    //2.遍历二维数组
    for(int i=0;i<5;i++)
    {
        //i：依次表示二维数组里的每一个索引
        char* str=strArr[i];//获取每一个一维数组的地址再存到一个新的指针中
        //在循环中，strArr[i] 是一个指向第 i 个字符串的指针，因此可以将其赋值给 char* str。
        printf("%s",str);//直接解引用指针，printf函数在打印字符串的时候可以直接解引用指针，不需要解引用符
    }


//第二种方式
//把五个字符串的指针放到一个数组当中
char* strArr2[5]={
        "zhouyihao ",
        "chentong ",
        "liumuyang ",
        "shi",
        "shabi"};
        for(int i=0;i<5;i++)
        {
            char* str=strArr2[i];
            printf("%s\n",str);
        }

}
