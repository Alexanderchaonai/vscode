#include<iostream>
using namespace std;
const int N=1e5;

int digit(int numbook,int length)
{
    /*int temp=0;
    while(temp<length)
    {
        int digit=numbook%10;
        temp=temp*10+numbook;
        numbook/=10;
    }
    return temp;*/
    
    int divisor = 1;
    for (int i = 0; i <length; i++)
    {
        divisor *= 10;
    }
    return numbook % divisor;
}

int main()
{
    int n,q;
    cin>>n>>q;
    int numbook[1010]={0};
    int length[N]={0};
    int numneed[N]={0};
    for(int i=0;i<n;i++)
    {
        cin>>numbook[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>length[i]>>numneed[i];
    }
    for(int j=0;j<q;j++)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(numneed[j]==digit(numbook[i],length[j]))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}