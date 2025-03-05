#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int month=1;month<=12;month++)
    {
        for(int day=1;day<=days[month];day++)
        {
        int x[]={2,month/10,month%10,day/10,day%10};
        bool flag=false;
        for(int j=0;j<3;j++)
        {
            if(x[j]+1==x[j+1]&&x[j+1]+1==x[j+2])
            {
                flag=true;
            }
        }
        if(flag==true)
        ans++;
        }
    }
    cout<<ans;
}