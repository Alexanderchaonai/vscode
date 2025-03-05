#include<iostream>
using namespace std;
int main()
{
    string s;
    int a[10];
    getline(cin,s);
    int sum=0;
    int index=1;
    for(int i=0;i<12;i++)
    {
        if(i!=1&&i!=5&&i!=11)
        {
        a[index]=s[i]-'0';
        sum=sum+a[index]*index;
        index++;
        }
    }
    int yushu=sum%11;
    cout<<yushu;
    a[9]=s[s.size()-1]-'0';
    if(yushu>=0&&yushu<=9)
        if(yushu==a[9])
        cout<<"Right"<<endl;
        else
        {
        s[s.size()-1]=yushu+'0';
        cout<<s<<endl;
        }
    if(yushu==10)
    {
        if(s[s.size()-1]=='X')
        cout<<"Right";
        else
        {
            s[s.size()-1]='X';
            cout<<s<<endl;
        }
    }
}   