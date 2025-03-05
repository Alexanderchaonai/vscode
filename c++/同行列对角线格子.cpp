#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    cin>>N>>i>>j;
    for(int x=1;x<=N;x++)
    {
        for(int y=1;y<=N;y++)
        {
            if(x==i)
            cout<<"("<<x<<","<<y<<")";
        }
        cout<<endl;
    }
    for(int x=1;x<=N;x++)
    {
        for(int y=1;y<=N;y++)
        {
            if(y==j)
            cout<<"("<<x<<","<<y<<")";
        }
        cout<<endl;
    }
    for(int x=1;x<=N;x++)
    {
        for(int y=1;y<=N;y++)
        {
            if(x-y==i-j)
            cout<<"("<<x<<","<<y<<")";
        }
        cout<<endl;
    }
    for(int x=N;x>=1;x--)
    {
        for(int y=N;y>=1;y--)
        {
            if(x+y==i+j)
            cout<<"("<<x<<","<<y<<")";
        }
        cout<<endl;
    }
}