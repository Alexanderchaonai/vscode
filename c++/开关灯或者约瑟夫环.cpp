#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    bool light[1000]={0};
    for(int i=0;i<n;i++)//人的编号
    {
        for(int j=0;j<n;j++)//灯的编号
        {
            if(j%i==0)
            {
            light[j]=!light[j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(light[i]==1)
        cout<<i<<" ";
    }*/
   int n;
   cin>>n;
   for(int i=1;i*i<=n;i++)
   {
        cout<<i*i<<" ";
   }

    



}