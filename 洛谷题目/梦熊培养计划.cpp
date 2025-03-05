// #include<iostream>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// const int N=1e6;
// const int M=25;
// typedef struct student
// {
//     string name[N];
//     double score[N][M];
//     double stand[N];
// }stu;
// bool cmp()
// {

// }
// // void quicksort(int l,int r)
// // {
// //     int i=l,j=r;
// //     int mid=(l+r)/2;
// //     double x=stu.stand[mid];
// //     while(i<=j)
// //     {
// //         while(stu.stand[i]<x)
// //             i++;
// //         while(stu.stand[j]>x)
// //             j--;
// //         if(i<=j)
// //         {
// //             if(fabs(stu.stand[i]-stu.stand[j]) < 1e-6)
// //             {
// //                 if(stu.name[i] > stu.name[j])
// //                     swap(i, j);
// //             }
// //             else
// //             {
// //                 swap(i, j);
// //             }
// //             i++;
// //             j--;
// //         }
// //     }
// //     if(l<j)quicksort(l,j);
// //     if(i<r)quicksort(i,r);
// // }

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         cin>>stu.name[i];
//         double sum=0,aver=0;
//         for(int j=0;j<m;j++)
//         {
//             cin>>stu.score[i][j];
//             sum+=stu.score[i][j];
//         }
//         aver=sum/m;
//         double sum1=0;
//         for(int j=0;j<m;j++)
//         {
//             sum1+=pow(stu.score[i][j]-aver,2);
//         }
//         double standard=sqrt(sum1/n);
//         stu.stand[i]=standard;
//     }
//     quicksort(0,n-1);//(int*)student.stand);
//     int length=n<20?n:20;
//     for(int i=0;i<length;i++)
//     {
//         cout<<stu.name[i]<<endl;
//     }
// }


#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct stu
{
    string name;
    double score[25];
    double sub;
};
    stu s[100005];

bool cmp(stu a,stu b)
{
    if(fabs(a.sub - b.sub) < 1e-6)
        return a.name<b.name;
    else
        return a.sub>b.sub;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name;
        double sum=0,aver=0;
        for(int j=0;j<m;j++)
        {
            cin>>s[i].score[j];
            sum+=s[i].score[j];
        }
        aver=sum/m;
        double sum1=0;
        for(int j=0;j<m;j++)
        {
            sum1+=pow(s[i].score[j]-aver,2);
        }
        s[i].sub=sum1;
    }
    sort(s,s+n,cmp);
    for(int i=0;i<min(n,20);i++)
    {
        cout<<s[i].name<<endl;
    }
    return 0;
}
