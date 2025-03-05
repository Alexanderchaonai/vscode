#include<iostream>
using namespace std;

typedef struct surandehunt
{
    string name;
    char type;
    long long fam;
}s;
s surv[1005];
s hunt[1005];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>surv[i].name>>surv[i].type>>surv[i].fam;
    }
    for(int i=0;i<m;i++)
    {
        cin>>hunt[i].name>>hunt[i].type>>hunt[i].fam;
    }

}