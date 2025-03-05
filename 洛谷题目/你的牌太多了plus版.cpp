#include<iostream>
#include<algorithm>
using namespace std;
int f1[105],f2[105],p1[105],p2[105];
bool visf1[105],visf2[105];
int main()
{
    int t;
    cin>>t;
    int n,r,m,s;
    cin>>n>>r>>m>>s;
    while(t--)
    {
        for(int i=1;i<=n;i++)
            cin>>f1[i];
        for(int i=1;i<=n;i++)
            cin>>p1[i];
        for(int i=1;i<=n;i++)
            cin>>f2[i];
        for(int i=1;i<=n;i++)
            cin>>p2[i];
        int cnt1=n,cnt2=n;
        int turn=s;
        int last_f=-1,last_p=-1;
        while(cnt1>0&&cnt2>0)
        {
            bool round_end=false;
            if(turn==1)
            {
                if(last_f==-1)
                {
                    int min_p=1000,min_f=1000,pos=-1;
                    for(int i=1;i<=n;i++)
                    {
                        if(!visf1[i])
                        {
                            if(p1[i]<min_p||(p1[i]==min_p&&f1[i]<min_f))
                            {
                                min_p=p1[i];
                                min_f=f1[i];
                                pos=i;
                            }
                        }
                    }
                    if(pos!=-1)
                    {
                        visf1[pos]=true;
                        cnt1--;
                        last_f=f1[pos];
                        last_p=p1[pos];
                    }
                    else
                    {
                        int min_p=1000;
                        for(int i=1;i<=n;i++)
                        {
                            if(!visf1[i]&&f1[i]==last_f&&p1[i]>last_p)
                            {
                                if(p1[i]<min_p)
                                {
                                    min_p=p1[i];
                                    pos=i;
                                }
                            }
                        }
                        if(pos!=-1)
                        {
                            visf1[pos]=true;
                            cnt1--;
                            last_p=p1[pos];
                        }
                        else
                        {
                            turn=2;
                            last_f=-1;
                            last_p=-1;
                        }
                    }
                }
            }
            else
            {
                if(last_f == -1)
                {
                    // 第一轮，打出点数最小的牌
                    int min_p = 1000, min_f = 1000, pos = -1;
                    for(int i = 1; i <= n; i++)
                    {
                        if(!visf2[i])
                        {
                            if(p2[i] < min_p || (p2[i] == min_p && f2[i] < min_f))
                            {
                                min_p = p2[i];
                                min_f = f2[i];
                                pos = i;
                            }
                        }
                    }
                    if(pos != -1)
                    {
                        visf2[pos] = true;
                        cnt2--;
                        last_f = f2[pos];
                        last_p = p2[pos];
                    }
                    else
                    {
                        // 无牌可出（不可能发生）
                        round_end = true;
                    }
                }
                else
                {
                    // 轮流出牌，需跟随花色且点数比上一张大
                    int min_p = 1000, pos = -1;
                    for(int i = 1; i <= n; i++)
                    {
                        if(!visf2[i] && f2[i] == last_f && p2[i] > last_p)
                        {
                            if(p2[i] < min_p)
                            {
                                min_p = p2[i];
                                pos = i;
                            }
                        }
                    }
                     if(pos != -1)
                    {
                        visf2[pos] = true;
                        cnt2--;
                        last_p = p2[pos];
                        // 小 F 继续出牌，轮次不变
                    }
                    else
                    {
                        // 无牌可出，本轮结束，轮次交换，重置上一张牌
                        round_end = true;
                        turn = 1;
                        last_f = -1;
                        last_p = -1;
                    }
                }
            }   
            if(round_end)
            {
                last_f = -1;
                last_p = -1;
            }

            // 判断是否有人出完所有牌
            if(cnt1 == 0 || cnt2 == 0)
                break;
        }
        if(cnt1 == 0)
            cout << "FS wins!" << endl;
        else
            cout << "FR wins!" << endl;

        // 重置标记数组，准备下一组数据
        fill(visf1, visf1 + n + 1, false);
        fill(visf2, visf2 + n + 1, false);
    }
}