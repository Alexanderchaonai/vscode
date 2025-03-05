#include<iostream>
using namespace std;
int main()
{
    string s[105],a,b;
    int len=0;
    cin>>a>>b;
    while(cin>>s[len])
    len++;
    for(int i=0;i<len;i++)
    {
        if(s[i]==a)
        s[i]=b;
        cout<<s[i]<<" ";
    }
}
//这道题是单词替换，就是说在所给的一串字符串中，找到需要替换的那个单词，将另外一个单词替换进去，我现在的问题
//是根本不知道该怎么输入，以及定义格式，是直接string s还是使用字符串数组string s[]，还有该怎么输入，就是我是
//使用getline还是while输入，这两个各自有自己的用处，好晕明天再看