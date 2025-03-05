// #include<iostream>
// using namespace std;
// const int N=1e9;
// const int M=1e6;
// int score [N];
// int code [M];
// int main()
// {
//     int n,m,coder;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         code[i]=-1;
//     }
//     for(int i=1;i<=n;i++)
//     {
//         cin>>coder;
//         code[coder]++;
//     }
//     int cnt=0;
//     for(int i=1;i<=m;i++)
//     {
//         cin>>code[i]>>score[i];
//         if(code[i]==0)
//         {
//             code[i]++;
//             if(score[i]<60)
//             {
//                 cnt++;
//             }
//         }
//     }
//     int cnt1=0;
//     for(int i=1;i<=n;i++)
//     {
//         if(code[i]==1)
//             cnt1++;
//     }
//     cout<<n-cnt1<<" "<<cnt<<end


#include<iostream>
using namespace std;
const int N=5005;
int e[N];
int p[N],s[N];// 存储成绩记录
int score[N];// 存储对应的成绩，初始化为 -1
bool used[N];// 标记该课程是否已处理
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>e[i];
        score[i]=-1;// 初始化成绩为 -1
        used[i]=0; // 初始化标记为未处理
    }
    // for(int i=1;i<=m;i++)
    // {
        // bool found=false;
        // cin>>p[i]>>score[i];
        // for(int j=1;j<=n;j++)
        // {
        //     if(p[i]==e[j])
        //     {
        //         if(!found)
        //         {
        //             cnt1++;
        //             found=true;
        //         }             
        //     }
        // }
        // if(score[i]<60)
        // {
        //     cnt2++;
        // }
    //}
    for(int i=1;i<=m;i++)
    {
        cin>>p[i]>>s[i];
    }
    for(int i=m;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(p[i]==e[j]&&used[j]==0)
            {
                score[j]=s[i];
                used[j]=1;
            }
        }
    }
    int absent=0;
    int fail=0;
    for(int j=1;j<=n;j++)
    {
        if(used[j]==0)
        {
            absent++;
            fail++;
        }
        else if(score[j]<60)
            fail++;
    }
    cout<<absent<<endl;
    cout<<fail<<endl;
}   