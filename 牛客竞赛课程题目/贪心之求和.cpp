#include<iostream>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    int max=0;
    // int cnt=1;
    // while(s>cnt*9)
    // {
    //     cnt++;
    //     max=max*10+9;
    // }
    // //cout<<max<<endl;
    // if(s!=cnt*9)
    // {
    //     int temp=s-(cnt-1)*9;
    //     max=max+temp;
    //     max=max*pow(10,m-cnt);
    // }
    // //cout<<max;
    long long maxNum = 0;
    int sum = s;
    for(int i = 0; i < m; i++)
    {
        int digit;
        if(sum >= 9)
        {
            digit = 9;
            sum -= 9;
        }
        else
        {
            digit = sum;
            sum = 0;
        }
        maxNum = maxNum * 10 + digit;
    }
    cout << maxNum << endl;
}