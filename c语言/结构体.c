//结构体：自定义的数据类型
//由一批数据组合而成的结构型数据
//里面的每一个数据都是结构体的成员
/*格式：
struct  结构体名字
{   成员1；
    成员2；
}
书写的位置：
函数的里面：局部位置，只能再本函数中使用
函数的外面：全局位置，在所有的函数中都可以使用
*/
#include<stdio.h>
#include<string.h>

struct Friend
{
    char name[100];
    int age;
    char gender;
    double height;
};

int main()
{
//使用结构体
//定义一个朋友类型的变量
struct Friend f1;
strcpy(f1.name,"啦啦啦");
f1.age=23;
f1.gender='f';
f1.height=1.88;
printf("朋友名字为：%s\n",f1.name);
printf("朋友年龄为：%d\n",f1.age);
printf("朋友性别为：%c\n",f1.gender);
printf("朋友身高为：%lf\n",f1.height);
}