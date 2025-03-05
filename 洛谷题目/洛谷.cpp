#include<iostream>
using namespace std;
string s[100000];

// bool res(string x,string y)
// {
//     int cnt=0;
//     if(x.size()!=y.size())
//     return false;
//     else
//     {
//         for(int i=0;i<x.size();i++)
//         {
//             for(int j=0;j<y.size();j++)
//             {
//                 if(x[i]==y[j])
//                 {
//                     cnt++;
//                     break;
//                 }
//             }
//         }
//     }
//     if(cnt==x.size())
//     return true;
//     return 0;
//}上面的方法双重循环超时了，下面写一个一个循环解决的办法
bool res(string x,string y)
{
    if(x.size()!=y.size())
    return false;
    else
    {
        int cntx[26]={0};
        int cnty[26]={0};
        for(int i=0;i<x.size();i++)
        {
            cntx[x[i]-'a']++;
            cnty[y[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(cntx[i]!=cnty[i])
            return false;
        }
        return true;
    }
}//这个是桶排序的思想，不用一个个查找，直接将出现过的26个字母存到对应的桶里面，只要找到了一个不相等的，就直接return false即可

int main()
{
    // ios::sync_with_stdio(0);
	// cin.tie(nullptr);
	// cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    int op,x,y;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>op>>x>>y;
        x--,y--;
        if(op==1)
        {
            s[y]=s[y]+s[x];
            s[x]=" ";
        }
        else
        {
            if(res(s[x],s[y]))
            {
                cout<<"Yes"<<endl;
            }
            else
            cout<<"No"<<endl;
        }
    }

}