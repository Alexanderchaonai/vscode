#include<iostream>
using namespace std;
//动物类
class Animal
{
public:
    virtual void speak()//虚函数
    {
        cout<<"动物在说话"<<endl;
    }
};
class Dog :public Animal
{
public:
    void speak()
    {
        cout<<"汪汪汪"<<endl;
    }
};
class Cat :public Animal
{
public:
    void speak()
    {
        cout<<"喵喵喵"<<endl;
    }
};
//执行说话函数
//下面这个是地址早绑定，在编译阶段确定了函数地址
//如果想执行让猫说话，这个函数的地址就不能提前绑定，要在运行阶段再绑定，也就是晚绑定
void doSpeak(Animal &animal)//相当于 Animal & animal = cat;
{
    animal.speak();
}
//这么做的优势是，虽然都是同一个说话函数，但是是在你传入的对象不同，可以在传入之后再去执行确定的函数，不用频繁改变传入的参数类型
void test01()
{
    Cat cat;
    Dog dog;
    doSpeak(cat);
    doSpeak(dog);
}

int main()
{
    test01();
}

//动态多态满足条件
//1.有继承关系
//2.子类重写父类的虚函数
//重写：函数名相同，返回值类型相同，参数完全相同

//动态多态的使用
//父类的指针或者引用  指向子类的对象