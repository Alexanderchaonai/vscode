#include<iostream>
#include<cstdlib>
#include<ctype.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    string r="mnsfdx";
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(n!=6)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            bool vaild=true;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='m'&&s[i]!='n'&&s[i]!='s'&&s[i]!='f'&&s[i]!='d'&&s[i]!='x')
                {
                    vaild=false;
                    break;
                }
            }
            if(!vaild)
            {
                cout<<-1<<endl;
                continue;
            }
            int cnt=0;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]!=r[i])
                    {
                        int pos=-1;
                        for(int j=i+1;j<s.size();j++)
                        {
                            if(s[j]==r[i])
                            {
                                pos=j;
                                break;                          
                            }
                        }
                        if(pos==-1)
                        {
                            cnt=-1;
                            break;
                        }
                        else
                        {
                            for(int j=pos;j>i;j--)
                            {
                                swap(s[j],s[j-1]);
                                cnt++;
                            }
                        }
                    }
                }
            if(cnt!=-1)
                cout<<cnt<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}