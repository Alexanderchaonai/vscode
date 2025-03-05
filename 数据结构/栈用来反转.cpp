#include<iostream>
#include<stack>
using namespace std;
//反转字符串，就是创建一个字符栈，将字符数组里面的字母一个个压入栈中，然后再用pop一个个重新获取元素
struct Node 
{
    int data;
    Node *next;
};
//当然，可以使用链式存储结构进行反转，和数组形式一样，都是先压入栈，再一个个先获取元素回去，再弹出
stack<Node*>S;



// class Stack
// {
// private:
//     string s;
//     int top;
// public:
//     void push(int x);
//     void pop();
//     int top();
//     bool isempty();
// };我们这里可以自己写一个栈，也可以直接使用c++标准库中的stack头文件，里面可以直接使用一个栈

void reverse(char *c,int n)
{
    stack<char>s;
    //压入栈中
    for(int i=0;i<n;i++)
    {
        s.push(c[i]);
    }
    //弹出栈,然后再放原数组中就可以解决问题了
    for(int i=0;i<n;i++)
    {
        c[i]=s.top();
        s.pop();
    }
}
//当然，要反转字符串肯定还有更有效的方法，这里只是为了方便我们更加清晰的理解栈才这么写，比如还可以使用双指针分别指向数组的第一个元素
//和最后一个元素，只要i<j，就交换这两个位置的字符，一个很简单的方法
int main()
{
    char c[51];
    cin>>c;
    reverse(c,strlen(c));
    cout<<c;
}
