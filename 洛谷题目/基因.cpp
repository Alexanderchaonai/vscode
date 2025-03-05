#include<iostream>
using namespace std;
int main()
{
    int n,Q,L,R;
    string s[1005];
    cin>>n>>Q;
    int i=1;
    for(int i=1;i<=n;i++) 
    {
    cin>>s[i];
    }
    while(Q--)
    {
        cin>>L>>R;
        int cnt=0;
        bool found=false;
        for(int x=L;x<=R;x++)
        {
            for(int j=1;j<=n;j++)
            {
                int k=0,right=0,xleft=0,xright=0,place,pos;
                while(s[j][k]!='\0')
                {
                    if(s[j][k]=='=')
                    {
                        pos=k;
                        right=right*10+(s[j][k+1]-'0');
                    }
                    if(s[j][k]=='-'||s[j][k]=='+')
                    {
                        place=k;
                    }
                    k++;
                }
                for(int i=0;i<place;i++)
                {
                    if(isdigit(s[j][i]))
                        xleft=xleft*10+(s[j][i]-'0');
                }
                for(int i=place+1;i<pos;i++)
                {
                    if(isdigit(s[j][i]))
                        xright=xright*10+(s[j][i]-'0');
                }
                int sum=0;
                if(xleft==0)
                    xleft=1;
                if(xright==0)
                    xright=1;
                if(s[j][place]=='+')
                    sum=right-xright;
                else
                    sum=right+xright;

                if(x*xleft==sum)
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}