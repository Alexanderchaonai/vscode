#include<iostream>
using namespace std;
int main()
{
    int x,n;
    int num[6];
    cin>>x>>n;
    int max=x;
    int pos[6]={0};
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=5;j++)
        {
            cin>>num[j];
        }
        int posnum=-1;
        int buyvalue=-1;
        for(int k=1;k<=5;k++)
        {
            if(max>=num[k])
            {
                    if(num[k]>buyvalue)
                    {
                        buyvalue=num[k];
                        posnum=k;
                    }
                    else
                    {
                        continue;
                    }
            }
        }
            if(buyvalue!=-1)
            {
                max=max-buyvalue;
                pos[buyvalue]++;
            }

    }
    for(int i=1;i<=5;i++)
    {
        cout<<pos[i]<<" ";
    }
    cout<<endl<<max<<endl;
}