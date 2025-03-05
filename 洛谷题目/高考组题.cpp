#include<iostream>
#include<algorithm>
using namespace std;

struct timu
{
    int xuhao;
    int dim;
    int sum;
    double aver;
};
timu tms[105];
bool cmp(timu a,timu b)
{
    if(a.aver==b.aver)
        return a.xuhao<b.xuhao;
    else
    return a.aver>b.aver;

}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        tms[i].sum=0;
        for(int j=1;j<=k;j++)
        {
            tms[i].xuhao=i;
            cin>>tms[i].dim;
            tms[i].sum+=tms[i].dim;
        }
        tms[i].aver=(double)tms[i].sum/k;
    }
    sort(tms+1,tms+1+n,cmp);
    for(int i=1;i<=2;i++)
    {
        cout<<tms[i].xuhao<<endl;
    }
}