#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int score=0;
    int i=1;
    while(score<=x)
    {
        if(i%2==0)
        {
            score+=6;
            i++;
        }
        else
        {
            score+=5;
            i++;
        }
    }
    cout<<i-1;
    return 0;
}


