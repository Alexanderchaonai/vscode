#include<iostream>
using namespace std;

int s[37]={0, 11, 13, 15, 17, 
            21, 23, 25, 27, 
            31, 33, 35, 37,
            41, 43, 45, 47, 
            51, 53, 55, 57, 
            61, 63, 65, 67, 
            71, 73, 75, 77, 
            81, 83, 85, 87, 
            91, 93, 95, 97};
bool check(int temp)
{
    int flag1=0,flag2=0;
    int shi[9]={1,2,3,4,5,6,7,8,9};
    int ge[4]={1,3,5,7};     
    int s=temp/10,g=temp%10;
    for(int i=0;i<4;i++)
    {
        if(g==ge[i])
        flag1=1;
        break;
    }
    for(int i=0;i<10;i++)
    {
        if(s==shi[i])
        flag2=1;
        break;
    }
    if(flag1&&flag2)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    int a[30]={0};
    int UNI=0,ECJ=0;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]>=1&&a[i]<=36)
            ECJ++;
            if(check(a[i]))
            UNI++;
        }
        if(ECJ==n&&UNI==n)
        cout<<"Bad!Ambiguous!"<<endl;
        else if(ECJ==n&&UNI==0)
        {
        cout<<"ECJTU"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<s[a[i]]<<" ";
        }
        }
        else if(UNI==n&&ECJ==0)
        {
            cout<<"UNIVERSITY"<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {
            cout << "Sorry!Bad data!" << endl;
        }
    }
    return 0;
}