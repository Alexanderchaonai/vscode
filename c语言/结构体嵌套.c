//结构体中成员的类型仍是其他的结构体，就是结构体的嵌套
/*定义一个结构体表示学生Student
Student成员如下：
名字，年龄，性别，身高，联系方式

联系方式method也是一个结构体，成员如下：
手机号，电子邮箱
*/
#include<stdio.h>
#include<string.h>

struct Message
{
    char phone[12];
    char mail[100];
};

struct Student
{
    char name[100];
    int age;
    char gender;
    double height;
    struct Message msg;
};



int main()
{
    //1.定义学生类型的变量
    struct Student stu;
    //2.给里面的每一个成员赋值
    strcpy(stu.name,"zhangsan");
    stu.age=2;
    stu.gender='m';
    stu.height=1.84;
    strcpy(stu.msg.phone,"18171222126");
    strcpy(stu.msg.mail,"2481247902@qq.com");
    //3.输出打印
    printf("学生的信息为：\n");
    printf("姓名为%s\n",stu.name);
    printf("年龄为%d\n",stu.age);
    printf("性别为%c\n",stu.gender);
    printf("身高为%lf\n",stu.height);

    printf("手机号为：%s\n",stu.msg.phone);
    printf("邮箱为：%s\n",stu.msg.mail);

    printf("--------------------------------------------------------\n");
    //批量赋值
    struct Student stu2={"lisi",24,'m',1.84,{"18171222126","2481247902@qq.com"}};
     printf("学生的信息为：\n");
    printf("姓名为%s\n",stu2.name);
    printf("年龄为%d\n",stu2.age);
    printf("性别为%c\n",stu2.gender);
    printf("身高为%lf\n",stu2.height);

    printf("手机号为：%s\n",stu2.msg.phone);
    printf("邮箱为：%s\n",stu2.msg.mail);




}