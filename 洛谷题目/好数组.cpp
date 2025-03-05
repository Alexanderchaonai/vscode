// #include<iostream>.
// using namespace std;
// const int N=1e9;
// int main()
// {
//     int n,p;
//     cin>>n>>p;
//     int a[N]={0};
//     int min=1e9;
//     int pos;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         if(a[i]<min)
//         {
//             min=a[i];
//             pos=i;
//         }
//     }
//     bool flag=false;
//     while(1)
//     {
//         int sum=0;
//         a[pos]+=p;
//         int minn=1e9;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]<min)
//             {
//                 min=a[i];
//                 pos=i;
//             }
//             sum+=a[i];
//         }
//         if(sum==min*(n-1))
//         {
//             cout<<"YES";
//             flag=true;
//             break;
//         }  
//     }
//     if(!flag)
//     cout<<"NO";

// }


#include<iostream>
using namespace std;
const int N=1e5;
int a[N];
int main()
{
    int n,p;
    cin>>n>>p;
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i])
            max=a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if((max-a[i])%p==0)
        cnt++;
    }
    if(cnt==n)
    cout<<"YES";
    else
    cout<<"NO";
}