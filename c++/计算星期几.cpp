#include<iostream>
using namespace std;
/*即使用for循环也会错，因为只需要知道是星期几，所以只需要知道积模7的结果就可以了，因为相乘之后是7的倍数的
那部分即使乘几也仍是7的倍数，所以直接边乘边模把那一部分模掉即可*/
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
        ans=ans%7;
    }
    switch(ans)
    {
    case 0:cout<<"Sunday"<<endl;  break;
    case 1:cout<<"Monday"<<endl;  break;
    case 2:cout<<"Tueaday"<<endl;  break;
    case 3:cout<<"Wednesday"<<endl;  break;
    case 4:cout<<"Thursday"<<endl;  break;
    case 5:cout<<"Friday"<<endl;  break;
    case 6:cout<<"Saturday"<<endl;  break;
    }
}