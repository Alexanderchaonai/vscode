#include<iostream>
using namespace std;
string zhong,hou;

void deal(int l1,int r1,int l2,int r2)//中序，后序
{
    if(l1>r1)return ;
    char root=hou[r2];
    cout<<root;
    int pos=-1;
    for(int i=l1;i<=r1;i++)
    {
        if(zhong[i]==root)
        {
            pos=i;
            break;
        }
    }
    deal(l1,pos-1,l2,l2+pos-1-l1);//左子树
    deal(pos+1,r1,l2+pos-l1,r2-1);
}

int main()
{
    cin>>zhong>>hou;
    deal(0,zhong.size()-1,0,zhong.size()-1);
    return 0;
}