#include<iostream>
using namespace std;
const int N=2e6;
bool small(double b,double a)
{
    int inta = (int)a;
    int intb = (int)b;
    if (inta != intb)
        return false;
    int arr1[6];
    int arr2[6];
    double fra = a - inta;
    double frb = b - intb;

    for (int i = 0; i < 6; i++)
    {
        fra *= 10;
        frb *= 10;
        arr1[i] = (int)fra % 10;
        arr2[i] = (int)frb % 10;
        // 消除已取出的整数部分，对下一位进行提取
        fra -= (int)fra;
        frb -= (int)frb;
    }

    // 比较小数部分的每一位
    for (int i = 0; i < 6; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

int main()
{
    double a,b;
    cin>>a>>b;
    if(small(a,b))
    cout<<"Yes";
    else
    cout<<"No";
}