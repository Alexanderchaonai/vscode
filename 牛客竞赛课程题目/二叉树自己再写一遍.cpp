#include<iostream>
using namespace std;
string zhong,hou;
void deal(int l1,int r1,int l2,int r2)
{
    if(l1>r1)   return ;
    int root=hou[r2];
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
    deal(l1,pos-1,l2,l2+(pos-1-l1));
    deal(pos+1,r1,l2+(pos-1-l1)+1,r2-1);
}
int main()
{
    cin>>zhong>>hou;

}