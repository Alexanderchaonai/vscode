#include<iostream>
using namespace std;
//方法1：使用string中的成员函数find，注意不是STL库中的find函数
/*
a.find(b)：这是 std::string 类的成员函数 find，用于查找字符串 b 在字符串 a 中的首次出现位置。
如果找到 b，find 将返回 b 在 a 中的起始索引（类型为 size_t）。
如果未找到，find 返回一个特殊常量 std::string::npos，表示没有找到。
!= a.npos：这是在检查 find 的返回值是否不等于 npos。如果返回值不等于 npos，说明 b 是 a 的子字符串。
*/
int main()
{
    string a,b;
    if(a.find(b)!=a.npos)
    cout<<b<<" is substring of "<<a<<endl;
    else if(b.find(a)!=b.npos)   //如果a是b的子串 
    {
        cout<<a<<" is substring of "<<b<<endl;
    }
    else      //如果没有子串关系 
    {
        cout<<"No substring"<<endl;
    }
    return 0;
}

//方法2：循环遍历双重循环查找字串
int main()
{
    string a,b;
    bool flag;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i;j<a.size()+i;j++)
        {
            flag=true;
            if(a[j-i]!=b[j])
            flag=false;
        }
        if(flag)
        cout<<a<<" is substring of "<<b;
        return 0;
    }

    for(int i=0;i<b.size();i++)
    {
        flag=true;
        for(int j=i;j<b.size()+i;j++) if(b[j-i]!=a[j]) flag=false;
        if(flag)
        {
            cout<<b<<" is substring of "<<a;
            return 0;
        }
    }
    if(!flag) cout<<"No substring";
    //如果都不是对方的子串
    return 0;
}