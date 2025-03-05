#include<iostream>
using namespace std;
char k[505][505];
int main()
{
    int r,c,n,m;
    cin>>r>>c>>n>>m;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>k[i][j];
        }
    }

    int x[5]={0,0,0,1,-1};//上，下，右，左
    int y[5]={0,1,-1,0,0};//上，下，右，左
    int validRabbit=0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            int cnt=0;

            if(k[i][j]=='.')
                continue;
            else if(k[i][j]=='F')
            {
                for(int p=1;p<=4;p++)//遍历四个方向
                {
                    bool flag=true;
                    int temp1=i+x[p];
                    int temp2=j+y[p];
                    while(temp1 >= 1 && temp1 <= r && temp2 >= 1 && temp2 <= c)
                    {
                        if(k[temp1][temp2]=='M')
                        {
                            flag=false;
                            break;
                        }
                        temp1+=x[p];
                        temp2+=y[p];

                    }
                    if(flag)
                        cnt++;
                }
                if(cnt>=3)
                {
                    validRabbit++;
                }

            }
            else
            {
                if(k[i][j]=='.')
                    continue;
               for(int p=1;p<=4;p++)//遍历四个方向
                {
                    bool flag=true;
                    int temp1=i+x[p];
                    int temp2=j+y[p];
                    while(temp1 >= 1 && temp1 <= r && temp2 >= 1 && temp2 <= c)
                    {
                        if(k[temp1][temp2]=='F')
                        {
                            flag=false;
                            break;
                        }
                        temp1+=x[p];
                        temp2+=y[p];
                    }
                    if(flag)
                        cnt++;
                } 
                if(cnt>=3)
                {
                    validRabbit++;
                }
            }
        }
    }
    cout<<validRabbit<<endl;
    return 0;
}