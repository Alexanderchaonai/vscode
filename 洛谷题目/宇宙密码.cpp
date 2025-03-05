#include<iostream>
#include<cmath>
using namespace std;
int b[1000];
int main()
{
    int n,a,k;
    cin>>n>>a>>k;

    for(int x=0;x<=pow(10,n)-1;x++)
    {    
        int cnt=0;
        bool flag=true;
        int temp1=x;
        int temp2=a;
        while(temp1>0||temp2>0)
        {
            int digit1=temp1%10;
            int digit2=temp2%10;
            if(digit1==digit2)
            {

            }
            else if(fabs(digit1-digit2)==1||fabs(digit1-digit2)==9)
                cnt++;
            else if(fabs(digit1-digit2)>=2&&fabs(digit1-digit2)<9)
            {
                flag=false;
                break;
            }
            temp2/=10;
            temp1/=10;
        }
        if(flag)
        {
            if(cnt<=k&&cnt>=0)
            {
                cout<<x<<endl;
            }
        }
    }
}

//总结：这道题一开始正着想发现完全难以实现，因此我们调转思路，从结果出发，判断这个数的每一位满不满足题目所给数的条件
//然后我在做题时出现的问题主要有：未注意cnt变量的重置，每次枚举一个新的x的时候都要重置，然后就是continue导致的死循环
//这会使我跳过后续再除10的操作，然后就是外层枚举的终止条件头脑太简单想错了
//注意内层循环不能只判断temp1变量，还要考虑temp1变量大于a的时候



// 总结
// 倒着枚举：通过枚举所有可能的密码，然后判断哪些密码符合条件，避免了直接从原密码出发处理变化组合的复杂性。

// 适用于密码长度较短的情况：由于密码长度 n 最多为 6，枚举方法的时间复杂度是可接受的。

// 便于代码实现和调试：判断逻辑统一，代码结构清晰，容易找出并修正错误。
