/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,g,k,x,y;
    long long a1[200][200];
    for(int i=1;i<=2000;i++)
    {
        for(int j=1;j<=2000;j++)
        {
            a1[i][j]=-1;
        }
    }
    int index=0;
    while(n--)
    {   
    cin>>a>>b>>g>>k; 
    for(int i=a;i<=a+g;i++)
    {
        for(int j=b;j<=b+k;j++)
        {
            a1[i][j]=index;
        }
    }
    index++;
    }
    cin>>x>>y;
    cout<<a1[x][y];
}*/
//爆啦
/*
#include<iostream>
#define int long long
using namespace std;
const int N=1e6+5;
int main()
{
    int n;
    cin>>n;
    int a[N],b[N],g[N],k[N];
    int ans=-1;
    for(int i=1;i<=N;i++)
    {
        cin>>a[i]>>b[i]>>g[i]>>k[N];
    }
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=N;i++)
    {
        if((x>=a[i]&&x<=(a[i]+g[i]))&&(y>=b[i]&&y<=(b[i]+k[i])))
        ans=i;
    }
    cout<<ans;
}*/

#include<iostream>
#define int long long
using namespace std;
const int N=1e6+5;
int a[N],b[N],g[N],k[N],n,ans=-1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>g[i]>>k[i];//输入1到n张地毯
	int x,y;
	cin>>x>>y;//点的坐标
	for(int i=1;i<=n;i++)
    {
		if((x>=a[i]&&x<=a[i]+g[i])&&(y>=b[i]&&y<=b[i]+k[i]))//每次判断当前地毯是否覆盖x，y
			ans=i;//更新答案
	}
	cout<<ans;
	return 0;
}
/*注意枚举方法，这里不需要每个地毯都遍历一遍，而是直接判断点在不在该地毯中，不在的话就不管它
*/