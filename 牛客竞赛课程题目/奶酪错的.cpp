#include<iostream>
#include<cmath>
using namespace std;
int n;
long double h,r;
bool vis[1000];
struct point
{
    long double x;
    long double y;
    long double z;
    long long r;
}p[1000];
bool inshape(point a,point b)
{
    return a.r+b.r>sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
bool found=false;
long long sum=0;
void dfs(int dep,long long last)
{
    if(dep>n)
    {
        if(sum>=h)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        if(p[i].z==0)
        {   
            vis[i]=1;
            sum+=2*p[i].z;
            found=true;
        }
        if(found)
        {
            for(int now=1;now<=n;now++)
            {
                if(inshape(p[now],p[last]))
                {
                    vis[now]=true;
                    sum=sum+sqrt((p[now].z-p[last].z)*(p[now].z-p[last].z))-p[last].r+p[now].r;
                    dfs(dep+1,now);
                }
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>h>>r;
        for(int i=1;i<=n;i++)
        {
            cin>>p[i].x>>p[i].y>>p[i].z;
        }
        dfs(0,0);
    }
}


#include <iostream>
using namespace std;

// 方便改成 long long 或 double
typedef double ftype;

struct Hole {
    ftype x, y, z;
};

static const int MAXN = 1010;
Hole p[MAXN];
bool visited[MAXN]; // 访问标记
vector<int> adj[MAXN]; // 存图：每个空洞能直接通往哪些空洞

// 判断两球是否相交或相切（含边界误差取决于题意，通常 dist <= 2*r 即算联通）
bool inshape(const Hole &A, const Hole &B, ftype r)
{
    ftype dx = A.x - B.x;
    ftype dy = A.y - B.y;
    ftype dz = A.z - B.z;
    ftype dist2 = dx*dx + dy*dy + dz*dz;
    ftype rr = 2.0*r; 
    return dist2 <= rr * rr + 1e-10; 
    // 加 1e-10 放宽一些浮误差，也可直接比较 dist2 <= rr*rr
}

// DFS 或 BFS 均可，这里用 DFS
bool dfs(int u, ftype h, ftype r)
{
    // 如果这个球与上表面相交，则说明成功到达顶部
    if(p[u].z + r >= h) return true;
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v])
        {
            if(dfs(v, h, r)) 
                return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // 测试组数
    cin >> T;
    while(T--)
    {
        int n; 
        ftype H, R;
        cin >> n >> H >> R;
        for(int i = 0; i < n; i++)
        {
            cin >> p[i].x >> p[i].y >> p[i].z;
        }
        // 每组数据都要重新建图，把上次的边清空
        for(int i = 0; i < n; i++)
        {
            adj[i].clear();
            visited[i] = false;
        }

        // 建立图：任意两洞相交/相切，即可互通
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(inshape(p[i], p[j], R))
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        // 从所有“与下表面相交/相切”的空洞出发 DFS
        bool canReachTop = false;
        for(int i = 0; i < n; i++)
        {
            if(!visited[i] && (p[i].z - R <= 0.0)) 
            {
                // 说明球与下表面相交，可当作潜在“起点”
                if(dfs(i, H, R))
                {
                    canReachTop = true;
                    break;
                }
            }
        }
        // 输出结果
        if(canReachTop) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}