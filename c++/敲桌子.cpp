#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        bool flag=0;
        int original_i=i;
        int temp2=i;
        if(i%7==0)
        {
            cout<<"敲桌子"<<endl;
        }
        for(int j=0;j<2;j++)
        {
            int temp=temp2%10;
            if(temp==7)
            {
                bool flag=1;
                break;
            }
            temp2=temp2/10;
        }
            if(flag==1)
            {
                cout<<"敲桌子"<<endl;
            }
           if(flag==0)
        {
            cout<<"该数字为："<<original_i<<endl;
        }
    }
     
    }
