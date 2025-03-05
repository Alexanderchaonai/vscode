#include<iostream>
using namespace std;
const int N=1e6;
int pos[N],r[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>pos[i]>>r[i];
    }
    int k,max=0;
    for(int i=1;i<=n-1;i++)
    {
        if(r[i]<pos[i+1]-pos[i])
        {
            k=pos[i+1]-pos[i]-r[i];
            if(k>max)
            {
                max=k;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}