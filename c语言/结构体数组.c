//定义一个结构体表示学生，学生的属性有：姓名，年龄
//要求：把三个学生信息放入到数组中，并遍历数组
#include<stdio.h>

struct student
{
    char name[100];
    int age;
};

int main()
{
    //1.定义三个学生，同时并进行赋值
    struct student stu1={"zhangssan",23};
    struct student stu2={"lisi",24};
    struct student stu3={"wangwu",250};
    //2.把三个学生放入数组中
    struct student stuArr[3]={stu1,stu2,stu3};
    for(int i=0;i<3;i++)
    {
        struct student temp=stuArr[i];
        printf("学生的信息为：姓名%s,年龄：%d\n",temp.name,temp.age);
    }

}