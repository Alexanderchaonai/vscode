#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int index=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {   index=1;
            continue;
        }
        if(index%2==1)
        {
            if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
        }
        if(index%2!=1)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
        }
        index++;
    }
    cout<<s;
}
//题解：注意这题要我们处理带空格的输入，因此首先使用getline输入，然后i表示遍历整个字符串，index表示当前是奇数位还是偶数
//位，在没有遇到空格之前，index从1开始自增，如果遇到了一个空格，就把index重置为1，注意这道题的题目要求是把每个单词中的
//位数进行改变，而不是遍历整个字符串中的位数，所以这样是有用的，