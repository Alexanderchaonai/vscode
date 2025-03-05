#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[105]={0};

    int index=0;
    for(int i=0;i<s.size();i++)
    {
        bool flag=false;
        int cnt=0;
        for(int j=i;j<s.size();j++)
        {
            if(s[j]=='|')
            {
                if(flag==true)
                {
                    break;
                }
                else 
                {
                    flag=true;
                }
            }
            else if(s[j]=='-')
            {
                if(flag)
                cnt++;
            }
        }
        if(cnt>0)
        {
        a[index++]=cnt;
        i=i+cnt;
        }
    }
    for(int i=0;i<index;i++)
    {
        cout<<a[i];
        if(i!=index-1)
        cout<<" ";
    }
}