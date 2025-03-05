#include<iostream>
using namespace std;
string s[1000];
string t;
string r;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>s[i];
    }
    int k=0;
    while(n--)
    {
        cin>>t;
        for(int i=0;i<m;i++)
        {
            cin>>r;
            if(r==t+".zip"+'/'+t+'/'+s[i]+'/'+s[i]+".cpp")
            {
                cout<<"Fusu is happy!"<<endl;
            }
            else
            {
                cout<<"Fusu is angry!"<<endl;
            }
        }
    }

}