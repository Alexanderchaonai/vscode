#include<iostream>
#include<cstring>
using namespace std;
int a,b,c,gewei;
int d[10];
void cf(int n)//拆分函数
{
    while(n!=0)
    {
        int digit=n%10;
        n/=10;
        d[digit]++;
    }
}
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                a=i*100+j*10+k;
                b=a*2;
                c=a*3;
                memset(d,0,sizeof(d));
                cf(a),cf(b),cf(c);
                bool flag=true;
                for(int p=1;p<=9;p++)
                {
                    if(d[p]!=1)
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
        }
    }

}