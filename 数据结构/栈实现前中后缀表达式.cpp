#include<iostream>
#include<stack>
using namespace std;
//主要是求值，比如   23*54*+9-
//从左开始，把操作数放到栈中，碰到符号操作符时，检查最后放进去的两个已经放到栈里面的操作数，然后我们取出他们再做
//相应的运算，相当于把23*变成了6，现在变成了654*+9-，第二次碰到*后，重复上述操作，然后变成了6 20+9-
//然后是26 9-，最后是17
//优点是：我们全程只对表达式做了一次分析就能得到结果，很好的遵循了LIFO原则，最后入栈的最先出栈




//实现把中缀表达式转换为后缀表达式的函数,这个算法可以直接从左到右扫描一次中缀表达式就可以转换
//第一步：我们发现，无论是什么表达式，操作数的顺序都是不会发生改变的，然而操作符的顺序可能发生改变，因此我们在从左到右
//扫描的时候，每碰到一个操作数，就直接把它放到后缀表达式中，如果碰到操作符，首先先比较它和当前栈中的运算符的优先级，如果
//比它高，就不弹出当前栈中的运算符，而是把现在这个新的运算符压入栈中（相当于栈中上面的运算符的优先级肯定从始至终
//都是比下面的高的），一旦找到了一个低优先级的运算符，就相当于找到了右运算数的边界，就把当前栈中比他运算符高的
//所有运算符弹出栈并放入后缀表达式中，然后当前运算符本身在压入栈


bool hasHigherPrec(char a,char b)//前一个是当前栈顶的元素，后一个是当前的操作符，现在返回的要是a>b
{
    if(a=='*'||a=='/'||a=='%')
        return true;
    else if(a=='+'||a=='-')
    {
        if(b=='*'||b=='/'||b=='%')
            return false;
        else
            return true;
    }
    return 0;
}

bool isOpeningKuohao(char c)//三个括号都要考虑
{
    if(c=='('||c=='['||c=='{')
        return true;
    return false;
}

bool isClosingKuohao(char c)
{
    if(c==')'||c==']'||c=='}')
        return true;
    return false;
}

char getMatch(char closing)
{
    if(closing==')')return '(';
    if(closing==']')return '[';
    return '{';
}

string InfixToPostfix(string s)
{
    //为了方便理解原理，这里先假设操作数和操作符都只有一个字母
    stack<char>ch;//创建一个字符栈
    string p;
    int index=0;
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
            p+=s[i];
        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%')
        {
            while(!ch.empty()&&hasHigherPrec(ch.top(),s[i])&&!isOpeningKuohao(ch.top()))//如果栈顶元素比我们正在检查的优先级要高，就把栈顶元素加入后缀表达式中
            {
                char res=ch.top();
                p+=res;
                ch.pop();
            }
            ch.push(s[i]);//循环结束后，把现在的操作符压入栈中
        }
        else if(isOpeningKuohao(s[i]))//左括号压入
        {
            ch.push(s[i]);
        }
        else if(isClosingKuohao(s[i]))//右括号检查
        {
            char target=getMatch(s[i]);
            while(!ch.empty()&&!isOpeningKuohao(ch.top())&&ch.top()!=target)//注意，这里不需要将括号放入后缀表达式中，直接弹出即可
            {
                char res=ch.top();
                ch.pop();
            }
            if(!ch.empty())
                ch.pop();
        }
    }
    while(!ch.empty())
    {
        char res=ch.top();
        p+=res;
        ch.pop();
    }
    return p;
}


int perform(char c,int a,int b)
{
    if(c=='+')
        return a+b;
    else if(c=='-')
        return a-b;
    else if(c=='*')
        return a*b;
    else if(c=='/')
        return a/b;
    else if(c=='%')
        return a%b;
    return 0;
}
int evaluatePostfix(string s)//先暂时假设每个数组都只有一位
{
    stack<char>c;
    for(int i=0;i<s.size();i++)//扫描表达式
    {
        if(isdigit(s[i]))//如果是数字，就压入栈中
        {
            c.push(s[i]);
        }
        else//否则就是运算符
        {
            if(c.empty())
                return;
            int op1=c.top();
                c.pop();
            int op2=c.top();
                c.pop();
            int res=perform(s[i],op1,op2);
            c.push(res);
        }
    }
    return c.top();
}
//但是有缺点，目前只能处理一开始每个数字都只有一位的情景，还需要加一些条件判断
//注意：前缀表达式基本一样，就是需要从右往左扫描