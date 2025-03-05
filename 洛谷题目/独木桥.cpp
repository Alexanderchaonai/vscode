#include<iostream>
#include<algorithm>
using namespace std;
int num[5005],tong[5005];
int main()
{
    int l,n;
    int ans=0,sna=0;
    cin>>l>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
        //tong[num[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        ans=max(min(num[i],l+1-num[i]),ans);
        sna=max(max(num[i],l+1-num[i]),sna);
    }
    cout<<ans<<" "<<sna;
    return 0;


    // int mintime=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(num[i]<=l/2)
    //     {
    //         mintime=mintime+tong[num[i]]*num[i];
    //     }
    //     else
    //     {
    //         mintime=mintime+tong[num[i]]*(l-num[i]);
    //     }
    // }
    // cout<<mintime<<" ";
    // sort(num+1,num+n+1);
    // int maxtime=0;
    // for(int i=1;i<=n;i++)
    // {
    //     maxtime=max(num[n],l-num[1]+1);
    // }
    // cout<<maxtime<<endl;
    // return 0;
}