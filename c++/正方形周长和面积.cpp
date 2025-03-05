#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long space=0,len=0;
    for(int i=1;i<=n;i++)
    {
        len=len+4*i-2*(i-1);
        space=space+i*i;
    }
    cout<<len<<endl;
    cout<<space<<endl;
}