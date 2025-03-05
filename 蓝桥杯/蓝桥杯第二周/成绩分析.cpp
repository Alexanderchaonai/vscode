#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int n,num;
  cin>>n;
  double sum=0,max=0,min=101;
  for(int i=0;i<n;i++)
  {
    cin>>num;
    if(num>max)
    max=num;
    if(num<min)
    min=num;
    sum+=num;
  }
  cout<<max<<endl;
  cout<<min<<endl;
  printf("%.2lf",sum/n);
  return 0;
}