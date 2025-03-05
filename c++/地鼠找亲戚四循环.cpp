#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[55][55]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            bool flag=false;
            int max=0;
            for(int a=0;a<n;a++)
            {
                for(int b=0;b<m;b++)
                {
                    if(arr[i][j]==arr[a][b])
                    {
                    int dist=pow(i-a,2)+pow(b-j,2);
                        if(max<dist)
                        {
                            max=dist;
                            flag=1;
                        }

                    }
                }
            }
            if(!flag)
            {
                cout<<"0";
            }
            else
            {
                printf("%d ",max);
            }
        }
        cout<<endl;
    }
}
