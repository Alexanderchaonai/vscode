#include<iostream>
using namespace std;
string zhong,hou;
void deal(int l1,int r1,int l2,int r2)//前两个为中序序列范围，后两个参数为后序序列范围
{
    if(l1>r1)return ;
    char root=hou[r2];//找到根节点
    cout<<root;//输出根节点
    int pos=-1;
    for(int i=l1;i<=r1;i++)
    {
        if(zhong[i]==root){
            pos=i;//遍历当前的中序序列，从 l1 到 r1，找到与根节点值相同的位置 pos。
            break;
        }
    }
    int left_len=pos-l1;//左子树的节点数量，计算方法是 pos - l1。
    deal(l1,pos-1,l2,l2+(pos-1-l1));//左子树,因为左子树中序和后序长度一样，所以后序遍历直接加长度即可
    /*
    中序序列范围：
左子树的中序范围是 [l1, pos - 1]。
后序序列范围：
左子树的后序范围是 [l2, l2 + left_len - 1]，因为左子树的后序序列在后序序列的前 left_len 个位置。
时刻记得左            右                 根
    */
    deal(pos+1,r1,l2+(pos-1-l1)+1,r2-1);//右子树
    /*
    中序序列范围：
右子树的中序范围是 [pos + 1, r1]。
后序序列范围：
右子树的后序范围是 [l2 + left_len, r2 - 1]，因为右子树的后序序列紧跟在左子树的后序之后，根节点（hou[r2]）已经排除。
    */
}
int main()
{
    cin >> zhong >> hou;
    int len = zhong.length();
    deal(0, len - 1, 0, len - 1);
    return 0;
}