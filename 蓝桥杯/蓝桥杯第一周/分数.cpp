/*#include<iostream>
using namespace std;

int Sum(int n,int time)
{
    int sum=0;
    if(time==1)
    return n;
    else
    {
        sum=sum+Sum(n-1,20);
    }
    return sum;
}

int main()
{
    int number=Sum(1,20);
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    double i=1,count=1;
    double sum=0;
    while(count<=20)
    {
        sum+=i;
        i/=2;
        count++;
    }
    printf("%.10lf",sum);
}*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double sum=0;
    double a1=1;
    sum=(a1*(1-pow((0.5),20)))/(0.5);
    printf("%.10lf",sum);
}