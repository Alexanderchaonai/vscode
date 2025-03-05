#include<iostream>
using namespace std;
string s;
char fbi(int l,int r)
{
    int mid=(l+r)/2;
    if(l==r)
    {
        if(s[l]=='1'){cout<<'I';return 'I';}
        if(s[l]=='0'){cout<<'B';return 'B';}
    }
    char a=fbi(l,mid);
    char b=fbi(mid+1,r);
    if(a==b&&a=='B')
    {
        cout<<'B';
        return 'B';
    }
    else if(a==b&&a=='I')
    {
        cout<<'I';
        return 'I';
    }
    else
    {
        cout<<'F';
        return 'F';
    }
}
    
int main()
{
    int n;
    cin>>n;
    cin>>s;
    fbi(0,(1<<n)-1);
}