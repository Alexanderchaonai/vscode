#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct cand
{
   int id;
   int score;
};
cand a[10000];
bool cmp(cand a,cand b)
{
    if(a.score==b.score)
        return a.id<b.id;
    return a.score>b.score;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].id>>a[i].score;
    }
    sort(a+1,a+n+1,cmp);
    int line;
    for(int i=1;i<=n;i++)
    {
        if(i-1==floor(m*1.5))
        {
            line=a[i].score;
            break;
        }
    }
    cout<<line<<' ';
    int num=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i].score>=line)
            num++;
    }
    cout<<num<<endl;
    for(int i=1;i<=num;i++)
    {
        cout<<a[i].id<<' '<<a[i].score<<endl;
    }
}