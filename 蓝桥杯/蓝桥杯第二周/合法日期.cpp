#include<iostream>
using namespace std;
int main()
{
    int m,d;
    cin>>m>>d;
    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>=1&&d<=31)
    cout<<"yes";
    else if((m==4||m==6||m==9||m==11)&&d>=1&&d<=30)
    cout<<"yes";
    else if(m==2&&d>=1&&d<=28)
    cout<<"yes";
    else
    cout<<"no";
}
