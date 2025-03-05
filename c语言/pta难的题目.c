/*#include<stdio.h>
#include<math.h>

void primeNumber(int n)
{
    int count=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d ",n);
    }
}



int main()
{
    int arr[1001];
    int len=sizeof(arr)/sizeof(int);
    for(int i=0;;i++)
    {
        arr[i]=primeNumber(i);
    }
}*/

#include<stdio.h>
#include<math.h>

int main()
{
    int arr[1000];
    int len=sizeof(arr)/sizeof(int);
    int count1=0;
    for(int i=2;;i++)
    {
        int count=0;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            arr[count1]=i;
            count1++;
        }
        if(count1==1000)
        {
            break;
        }
    }
    // for(int i=0;i<1000;i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    int N;
    _Bool ifone=0;
    while(N!=0)
    {
        scanf("%d ",&N);
        if(ifone==0){
            printf("%d",arr[N-1]);
            ifone=1;
        }
        else{
            printf(",%d",arr[N-1]);
        }
            
        
    }
}