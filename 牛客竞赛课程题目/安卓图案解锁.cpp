#include<iostream>
using namespace std;
int skip[10][10];

bool isVaild(string s)
{
    bool used[10]={0};
    int len=s.length();
    if(len==0)
        return false;
    int prev=s[0]-'0';//把第一个字符转化为数字
    if(prev<1||prev>9)
        return false;
    used[prev]=true;//标记数字为已经被使用
    for(int i=1;i<len;i++)
    {
        int curr=s[i]-'0';//获取当前字符对应的数字
        if(curr<1||curr>9||used[curr])
            return false;
        int mid=skip[prev][curr];//获取prev和curr之间需要经过的数字
        if(mid!=0&&!used[mid])
            return false;
        used[curr]=true;
        prev=curr;
    }
    return true;
}

int main()
{
    skip[1][3] = skip[3][1] = 2; // 从1到3需要经过2
    skip[1][7] = skip[7][1] = 4; // 从1到7需要经过4
    skip[3][9] = skip[9][3] = 6; // 从3到9需要经过6
    skip[7][9] = skip[9][7] = 8; // 从7到9需要经过8
    skip[1][9] = skip[9][1] = 5; // 从1到9需要经过5
    skip[2][8] = skip[8][2] = 5; // 从2到8需要经过5
    skip[4][6] = skip[6][4] = 5; // 从4到6需要经过5
    skip[3][7] = skip[7][3] = 5; // 从3到7需要经过5
    string s;
    while(cin>>s)
    {
        if(isVaild(s))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}