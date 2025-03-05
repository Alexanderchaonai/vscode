#include<iostream>
using namespace std;
class Student
{
    public:
    //属性
    string name;
    int id;
    //行为
    void show()
    {
        cout<<"姓名"<<name<<"学号"<<id<<endl;
    }
};
int main()
{
    //创建一个具体的学生，实例化对象
    Student s1;
    //给s1对象进行属性赋值
    s1.name="zhangsan";
    s1.id=1313234;
    //显示学生信息
    s1.show();
}