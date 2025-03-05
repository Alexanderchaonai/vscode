#include<iostream>
using namespace std;
char a[27]={0,'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{
    int n;
    cin>>n;
    int pos=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(pos==27)
            {
                pos=1;
                cout<<a[pos++];
            }
            else
                cout<<a[pos++];
        }
        cout<<endl;
    }
}