#include<iostream>
using namespace std;
int main()
{
    const int N=1e5+5;
    int n;
    cin>>n;
    int arr[N]={0};
    int attdef;
    for(int i=0;i<n;i++)
    {
        cin>>attdef;
        arr[i]=attdef;
    }
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    bool kill[N]={0};
    int killcount=0;
    //小的自己之间杀，大的最后上
    int killstart=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(kill[j]==0&&arr[j]<arr[i])
            {
                kill[j]=1;
                killcount++;
                killstart=j+1;
                break;
            }
        }
    }
    cout<<n-killcount<<endl;


}