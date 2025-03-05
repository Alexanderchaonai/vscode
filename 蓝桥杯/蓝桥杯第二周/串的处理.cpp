#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    s[0]=s[0]-32;
    cout<<s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==' '&&s[i]==' ')
        continue;
        else if(s[i-1]==' '&&s[i]>='a'&&s[i]<='z')
        {
        s[i]=s[i]-32;
        cout<<s[i];
        }
        else if(s[i]>='0'&&s[i]<='9'&&s[i-1]>='a'&&s[i-1]<='z')
        cout<<'_'<<s[i];
        else if(s[i]>='a'&&s[i]<='z'&&s[i-1]>='0'&&s[i-1]<='9')
        cout<<'_'<<s[i];
        else
        cout<<s[i];
    }
}

//这是错的-----------------------------------------------------------------