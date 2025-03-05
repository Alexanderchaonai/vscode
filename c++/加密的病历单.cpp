#include<iostream>
using namespace std;
int main()
{
    string s,a;
    cin>>s;
    a.resize(s.size());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
        s[i]=s[i]+32;
        }
        else if(s[i]>=97&&s[i]<=122)
        {
        s[i]=s[i]-32;
        }
    }
    for(int i=0;i<s.size();i++)
    {  
        a[i]=s[s.size()-i-1];
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 3;
            if (a[i] > 'Z') {
                a[i] -= 26; // 循环到字母表开头
            }
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] + 3;
            if (a[i] > 'z') {
                a[i] -= 26; // 循环到字母表开头
            }
        }
    }
    /*
    for(int i=0;i<s.size();i++)
    {
        a[i]=a[i]-3;
    }*/
    cout<<a;
}