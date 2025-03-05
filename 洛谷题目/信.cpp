// #include<iostream>
// using namespace std;
// const int N=1e6+10;
// typedef struct letters
// {
//     int S,s,M;
// };
// bool hasgift(letters letter[])
// {

// }
// int main()
// {
//     int n,x,y,a,b;
//     cin>>n>>x>>y>>a>>b;
//     long long happy;
//     letters letter[N];
//     for(int i=1;i<=n;i++)
//     {
//         cin>>letter[i].S>>letter[i].s>>letter[i].M;
//     }
// }

#include<iostream>
#include<cmath>
using namespace std;
const int N=1e5+10;
long long S,s,M;
int n,x,y,a,b;
long long hasgift(long long S,long long s,long long M)
{
    if(M-(s*y+S*x)>0)//说明有礼物
    {
        long long MM=M-s*y-S*x;
        if(MM>s*y+S*x)
        {
            return ceil(MM*1.5);
        }
        else
        {
            return MM;
        }
    }
    else
    return 0;
}
int main()
{

    cin>>n>>x>>y>>a>>b;
    long long happy=0;
    int cnta=0;
    int cntb=0;
    long long max=0;
    long long S,s,M;
    for(int i=1;i<=n;i++)
    {
        cin>>S>>s>>M;
        if(hasgift(S,s,M))
        {
            cnta++;
            cntb=0;
            long long temp=hasgift(S,s,M);
            happy+=temp;
            if(cnta>=a)
            {
                happy*=2;
            }
            //if(happy>=max)
                //max=happy;
        }
        else
        {
            cnta=0;
            cntb++;
            if(cntb>=b)
            {
                if(happy!=0)
                    happy/=2;
            }
        }
        if(happy>max)
            max=happy;
    }
    cout<<max<<' '<<happy;
}
//逆天题目，这居然是入门，总体思路都是对的，但是模拟的真的很恶心
//一开始以为是结构体，想着试试结果发现结构体反而更复杂了，因为不需要遍历所谓的信，只需要对每次输入的数据进行判断即可，因此不需要用
//数组存起来，然后就是循环里面的cnta和cntb的更新问题，注意因为题目里有连续两个字，所以每次只要一旦断了，立刻把cnta或者cntb重置为0
//所以一定要注意题目的逻辑层次关系，然后就是题意一开始还理解错了，在更新cnta>=a时，注意层次无论如何我都是先把temp加进去，然后再判断
//cnta是否>=a，然后再happy*=2，然后一开始还忘了用y，都用的x,前前后后改了十遍差不多，要是放到csp里面简直了，然后还忘了向上取整，使用
//ceil函数，