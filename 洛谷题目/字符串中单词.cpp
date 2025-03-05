#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,a;
    getline(cin,s);
    a.resize(s.size());
    for(int i=s.size()-1;i>=0;i--)
    {
        a[a.size()-i-1]=s[i];
    }
    int start=0;
    for(int i=0;i<a.size();i++)
    {
        if(i==a.size()-1||a[i]==' ')
        {
            for(int j=start;j<i;j++)
            {
                if(a[j]>='a'&&a[j]<='z')
                {
                    a[j]=a[j]-32;
                }
                else if(a[j]>='A'&&a[j]<='Z')
                {
                    a[j]=a[j]+32;
                }
                else if(a[j]>='0'&&a[j]<='9')
                continue;
            }
            if(start<i)
            {
                reverse(a.begin()+start,a.begin()+i); // 每次判断完都直接倒序
            }
            start=i+1;
        }
    }
    cout<<a<<endl;
}