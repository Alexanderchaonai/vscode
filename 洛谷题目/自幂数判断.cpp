#include<iostream>
using namespace std;

int hours(int i)
{
    return 10*i*(i+1)/2;
}
int mins(int i,int b)
{
    return 10*(b-1)*b/2;
}
int main()
{
    int t;
    cin>>t;
    int n,a,b,c,d,e,f,g;
    while(t--)
    {
        int t1=0,t2=0;
        cin>>n>>a>>b>>c>>e>>f>>g;
        for(int i=0;i<a;i++)
        {
            t1+=hours(i);
        }
        if(b>0)
            t1+=mins(a,b);
        t1+=c;
        for(int i=0;i<e;i++)
        {
            
            t2+=hours(i);
        }
        if(f>0)
            t2+=mins(e,f);
        t2+=g;
        int ans=t2-t1;
        cout<<ans<<endl;
    }
}