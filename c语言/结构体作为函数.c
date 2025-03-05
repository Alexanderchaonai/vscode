//函数中可以传递结构体
//两种情况：
//传递结构体的数据值
//传递结构体的地址值

/*定义一个结构体表示学生
学生的属性：姓名，年龄
要求：定义一个函数，修改学生中的数据*/
#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[100];
    int age;
}s;
//注意：这个函数使用了结构体，因此函数声明需要写在结构体下面
void method(s st);
void method2(s* p);





int main()
{
    //1.定义一个学生
    s stu;
    //2.给学生赋一个初始值
    strcpy(stu.name,"aaa");
    stu.age=0;
    //3.输出打印
    printf("学生的初始数据为：%s,%d\n",stu.name,stu.age);
    //4.调用函数修改学生数据
    method2(&stu);//注意，这里要传递的是地址
    //5.输出打印
    printf("学生的信息修改为：%s,%d\n",stu.name,stu.age);

    return 0;
}

//超级注意：
//          如果函数中写的是结构体类型的变量，相当于是定义了一个新的变量
//          此时是把main函数中stu的数据，传递给了method函数，并把stu中的数据复制给了新的变量st
//          我们在method函数中，仅仅是修改了变量st地1值，对main寒素中stu的值，是没有进行修改的





void method(s st)//这种传递方式为直接传递，缺点是无法修改后再返回main函数中的值
{
    printf("接收到main函数中学生的初始数据为：%s,%d\n",st.name,st.age);

    //修改
    printf("请输入要修改的学生名字：\n");
    scanf("%s",st.name);//注意，这里的st.name本身就是一个有字符串在内的数组，数组参与计算时会退化为指向数组首地址的指针，所以这里不需要再使用&进行取地址
    printf("请输入要修改的学生年龄：\n");
    scanf("%d",&(st.age));
    printf("在method函数中修改过后学生的信息为：%s,%d\n",st.name,st.age);


}


void method2(s* p)//main函数中，将stu的地址传递到该函数中
{
    printf("接收到main函数中学生的初始数据为:%s,%d\n",(*p).name,(*p).age);
    //修改
    printf("请输入要修改的学生名字：\n");
    scanf("%s",(*p).name);
    printf("请输入要修改的学生年龄：\n");
    scanf("%d",&((*p).age));
    printf("在method函数中修改过后的学生信息为：%s,%d\n",(*p).name,(*p).age);
}