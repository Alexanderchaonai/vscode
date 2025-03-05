#include<iostream>
#include<cmath>
using namespace std;
int v0,v1,t1,v2,t2,n,T;
long long S;
int main()
{
    int pos=0,now_time=0;
    cin>>S>>v0>>v1>>t1>>v2>>t2;
    cin>>n;
    while(n--)
    {
        cin>>T;
        long long next_pos=pos+(long long)v0*(T-now_time);//总结：这题我的基本思路都是有问题的，应该就是使用一个pos变量存储当前所处的位置
        //在循环中大胆定义next_pos用于判断是否有超过S的范围。但是这种题总是不知道最开始这一个步骤该怎么定义，这是最烦人的一点。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。
        //退出循环有两个条件，一个是到达目的地了，一个是思念次数用光了，注意，回到家乡是不能作为循环退出条件的
        if(next_pos>=S)
        {
            long long rest_dist=S-pos;
            int rest_time=ceil((double)rest_dist/v0);
            now_time+=rest_time;
            pos=S;
            break;
        }
        else if(next_pos<S)
        {
            pos=next_pos;
            v1+=v2;
            t1+=t2;
            now_time=T;//这一步需要注意，now_time需要从T开始累加，因为每一次思念之前都会已经经过了T秒
            now_time+=t1;
            pos-=(long long)v1*t1;
            if(pos<0)
                pos=0;//回到家乡，位置清0
        }
    }
    //思念完了
    if(pos<S)//如果思念完了还没到就直接往后继续走，不用考虑pos>S的情况，因为这种情况在循环里面已经用next_pos处理过了，一旦找到一个大于S的就会立刻退出
    {
        long long rest_dist=S-pos;
        int rest_time=ceil((double)rest_dist/v0);
        now_time=now_time+rest_time;
    }
    int day=now_time/(3600*24)+1;//这里也需要注意
    now_time%=(3600*24);
    int hour=now_time/3600;
    now_time%=3600;
    int minute=now_time/60;
    int second=now_time%60;
    printf("202304%02dat%02d:%02d:%02d",day,hour,minute,second);
}



// now_time 的意义：

// 变量 now_time 用于记录从出发开始，到当前时刻所经过的 总时间。
// 我们的目标是计算 zyl 到达目的地所花费的总时间，以便根据这个时间得出 zyl 到达的具体日期和时间。
// 循环的作用：

// 在循环中，我们模拟了 zyl 每次思念的过程，更新他的当前位置 pos 和已过去的时间 now_time。
// 当 zyl 思念结束后，可能 还未到达目的地。

// 循环外的处理：

// 当循环结束时，有两种情况：
// 情况一： zyl 在循环中已经到达了目的地（pos >= S），程序在循环内的 break 语句中跳出，now_time 已经是到达目的地的总时间。
// 情况二： zyl 处理完所有的思念，但 还未到达目的地（pos < S），这时他需要继续以速度 v0 前进，直到到达目的地。






/*提前读取T值
#include <iostream>
#include <cmath>
using namespace std;

long long S, v0, v1, t1, v2, t2;
int n;
long long T_values[105]; // 存储所有的 T 值

int main()
{
    int pos = 0, now_time = 0;
    cin >> S >> v0 >> v1 >> t1 >> v2 >> t2;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> T_values[i]; // 提前读取所有的 T 值
    }

    int idx = 1; // 当前处理的思念次数索引
    while(idx <= n)
    {
        long long T = T_values[idx];
        long long next_pos = pos + (long long)v0 * (T - now_time);
        if(next_pos >= S)
        {
            long long rest_dist = S - pos;
            int rest_time = ceil((double)rest_dist / v0);
            now_time += rest_time;
            pos = S;
            break;
        }
        pos = next_pos;
        v1 += v2;
        t1 += t2;
        now_time = T + t1;
        pos -= (long long)v1 * t1;
        if(pos < 0)
            pos = 0;
        idx++;
    }
    // 思念完了
    if(pos < S)
    {
        long long rest_dist = S - pos;
        int rest_time = ceil((double)rest_dist / v0);
        now_time += rest_time;
    }

    // 输出时间
    long long total_time = now_time;
    int day = total_time / 86400 + 1;
    long long time_remaining = total_time % 86400;
    int hour = time_remaining / 3600;
    time_remaining %= 3600;
    int minute = time_remaining / 60;
    int second = time_remaining % 60;
    printf("202304%02dat%02d:%02d:%02d", day, hour, minute, second);

    return 0;
}
*/