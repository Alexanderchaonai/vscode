#include<iostream>
#include<cstdio>
using namespace std;
struct word
{
    string line;
    int left=2;
}w[25];
int n;
int maxx=0  ;
int find(int last,int next)
{
    int lenl=w[last].line.length();
    int lenn=w[next].line.length();
    for(int i=lenl-1;i>=1;--i)
    {
        if(w[last].line[i]==w[next].line[0])
        {
            int j=0,k=i,cl=0;
            while(j<lenn&&k<lenl)
            {
                if(w[last].line[k]==w[next].line[j])
                    cl++;
                else
                    return 0;
                k++,j++;
            }
            if(k==lenl&&j<lenn)return cl;
            else return 0;
        }
    }
    return 0;
}

void dfs(int now,int length)
{
    bool flag=false;   
    for(int i=1;i<=n;i++)//搜索每个单词
    {
        if(w[i].left==0)continue;//用完了就跳过他
        else
        {
            int x=find(now,i);//没用完就在这个单词里面找到需要的字母，将返回的值设置为重叠的长度
            if(x)
            {
                flag=true;
                w[i].left--;
                length+=(w[i].line.length()-x);
                dfs(i,length);
                w[i].left++;
                length-=(w[i].line.length()-x);
            }
        }
    }
    if(!flag)
        maxx=max(maxx,length);
}


int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>w[i].line;
    char p;
    cin>>p;
    for(int i=1;i<=n;i++)
    {
        if(w[i].line[0]==p)
        {
            w[i].left--;
            dfs(i,w[i].line.length());
            w[i].left++;
        }
    }   
    cout<<maxx<<endl;
    return 0;
}