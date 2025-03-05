//这是一个非常实用的功能，我们输入一串字符串，检测其括号的匹配性，在这个实例中，我们不检查括号里面的内容正确性
//所以字符串里面任何和括号无关的东西都会被忽略，所以我们给出一个只有括号存在的字符串
//在我们从左往右扫描字符串的时候，任何一个右括号应该对应着离他最近的拿个左括号，在我们扫描的时候，我们记录每个
//未关闭的括号，每当我们碰到一个开放的括号，我们就把他加到表中，如果我们碰到一个关闭的括号，他应该就是列表
//中最后那个元素的关闭符，然后再把最后一个元素弹出
#include<iostream>
#include<stack>
using namespace std;



bool checkBalance(string s)
{
    int lens=s.size();
    stack<char>c;
    for(int i=0;i<lens;i++)
    {
        if(s[i]=='{'||s[i]=='['||s[i]=='(')
        {
            c.push(s[i]);
        }
        else if(s[i]=='}'||s[i]==']'||s[i]==')')
        {
            char top=c.top();
            if(c.empty())
            {
                return false;
            }
            c.pop();
            if ((s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[') ||
                (s[i] == ')' && top != '(')) 
            {
                return false;
            }
        }
    }
    if(c.empty())
        return true;
}

