#include<iostream>
using namespace std;

void oddAndEven(int num)
{
    while(num!=1)
    {
    if(num%2!=0)
    {
        int temp1=num*3+1;
        printf("%d*3+1=%d\n",num,temp1);
        num=temp1;
    }
    else
    {
        int temp2=num/2;
        printf("%d/2=%d\n",num,temp2);
        num=temp2;
    }
    if(num==1)
    break;
    }
    if(num==1)
    cout<<"End";
}
int main()
{
    int num;
    cin>>num;
    if(num==1)
    cout<<"End";
    else
    oddAndEven(num);
}
/*
由于 num 是通过值传递给 oddAndEven 函数的，所以在函数内部对 num 的任何修改都不会影响到传递给函数的原始变量
。但是，在这个特定的例子中，由于您已经在函数内部更新了 num 的值，并且这个值在后续的循环迭代中会被使用，所以
这个问题实际上并没有影响到程序的正确运行（尽管这不是一个好的编程实践，因为它违反了函数的封装性原则）。然而
，由于您没有返回任何值或使用引用/指针来修改原始变量，这个函数的设计本身就是有问题的。但在这个案例中，由于循
环逻辑和条件判断的存在，这个问题被“掩盖”了。
*/