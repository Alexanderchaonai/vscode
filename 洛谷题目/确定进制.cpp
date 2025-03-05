#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p,q,r;
    cin>>p>>q>>r;
    int a[10]={0};
    int b[10]={0};
    int c[10]={0};
    int index=0;
    bool found=false;
    for(int B=2;B<=16;B++)
    {
        int temp_p = p, temp_q = q, temp_r = r;
        int cnt1=0,cnt2=0,cnt3=0;
        long long sum1=0,sum2=0,sum3=0;
        while(temp_p)
        {
            int digit=temp_p%10;
            // if(digit>=0&&digit<=9)
            // {
            //     digit=digit+'0';
            // }
            // else if(digit>=10&&digit<=35)
            // {
            //     digit=digit-10+'A';
            // }
            a[cnt1++]=digit;
            temp_p/=10;
        }
        for(int i=0;i<cnt1;i++)
        {
            sum1=sum1+a[i]*pow(B,i);
        }
        while(temp_q)
        {
            int digit=temp_q%10;
            // if(digit>=0&&digit<=9)
            // {
            //     digit=digit+'0';
            // }
            // else if(digit>=10&&digit<=35)
            // {
            //     digit=digit-10+'A';
            // }
            b[cnt2++]=digit;
            temp_q/=10;
        }
        for(int i=0;i<cnt2;i++)
        {
            sum2=sum2+b[i]*pow(B,i);
        }
        while(temp_r)
        {
            int digit=temp_r%10;
            // if(digit>=0&&digit<=9)
            // {
            //     digit=digit+'0';
            // }
            // else if(digit>=10&&digit<=35)
            // {
            //     digit=digit-10+'A';
            // }
            c[cnt3++]=digit;
            temp_r/=10; 
        }
        for(int i=0;i<cnt3;i++)
        {
            sum3=sum3+c[i]*pow(B,i);
        }
        if(sum1*sum2==sum3)
        {
            cout<<B<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<0;
}