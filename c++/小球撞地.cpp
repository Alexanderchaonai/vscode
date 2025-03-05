#include<iostream>
using namespace std;
int main()
{
    double h;
    cin>>h;
    double sum=0;
    for(int i=1;i<=10;i++)
    {
        if(i==1)
        {
        sum=sum+h;
        }
        h=h/2;
        if(i<10)
        sum=sum+2*h;
    }
    cout<<sum<<endl;
    cout<<h<<endl;

}