#include<iostream>
using namespace std;
int a[5][5],h[10],l[10],maxh,minl;
int main()
{
    int num;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>num;
            a[i][j]=num;
        }
    }
    for(int i=1;i<=5;i++)
    {
        maxh=-1;//重置最大值为-1 
        for(int j=1;j<=5;j++)
            if(a[i][j]>maxh)
            {
                h[i]=j;//找到最大值所在的列 
                maxh=a[i][j];
            }
    }
    for(int i=1;i<=5;i++)
    {
        minl=99999;//重置最小值为99999 
        for(int j=1;j<=5;j++)
            if(a[j][i]<minl)
            {
                l[i]=j;//找到最小值所在的行 
                minl=a[j][i];
            }
    }
    for(int i=1;i<=5;i++)
    {
        if(i==l[h[i]])
        //对比是否有同时满足 行最大，列最小 
        {
        cout<<i<<" "<<h[i]<<" "<<a[i][h[i]];
        return 0;
        }
        else
        {
        cout<<"not found";
        return 0;
        }
    }
}