#include<iostream>
using namespace std;
int main()
{
    int x,y,z,n,m;
    cin>>x>>y>>z>>n>>m;
    int cnt=0;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m-i;j++)
        {
            int chi=m-i-j;
            if(chi%z==0)//小鸡的个数是z的倍数
            {
                if((chi/z)+i*x+y*j==n)//小鸡一共花的钱+公鸡+母鸡
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}