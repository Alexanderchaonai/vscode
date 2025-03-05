#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int c=b+t;
    int count=0;
    if(b+t<60-b)
    cout<<a<<endl<<b+t;
    else
    {
        while(t>60)
        {
            t=t-60;
            count++;
        }
        if(t>=60-b)
        {
        count++;
        cout<<a+count<<endl<<(b+t)%60;    
        }    
        else
        cout<<a+count<<endl<<(b+t)%60;
    }
}