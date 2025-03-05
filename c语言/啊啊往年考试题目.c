// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int* p=(int *)malloc(sizeof(int)*n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&*(p+i));
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(*(p+j)>*(p+j+1))
//             {
//                 int temp=*(p+j);
//                 *(p+j)=*(p+j+1);
//                 *(p+j+1)=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",*(p+i));
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int cock,hens,chi;
// 	int sum=100;
// 	for(cock=1;cock<=20;cock++)
// 	{
// 		for(hens=1;hens<=33;hens++)
// 		{
// 			if((sum-cock*5-hens*3)%3==0&&cock>0&&hens&&sum-cock*5-hens*3>0)
// 			{
// 				chi=(sum-cock*5-hens*3)*3;
//                 printf("%d %d %d",cock,hens,chi);
//                 printf("\n");
// 			}
// 		}
// 	}

// 	return 0;
// }
//---------------------------------------------------------------------------------------------------------

// #include<stdio.h> 
// void InvertArray(int p[],int n); // 逆 置 
// void OutputArray(int p[],int n); // 输 出 
// int main() 
// { 
// int a[10]; 
// int i; //表示数组下标 
// int item; //存储输入
// printf("Enter10 integers:\n"); 
// for(i=0;i<10;i++) //输入的数据用空格或换行来分隔 
// {
//         scanf("%d",&item); 
// 		a[i]=item;
// }
// InvertArray(a,10); //输出 
// printf("after invert:\n"); 
// OutputArray(a,10);
// return 0;
// } 

// void InvertArray(int p[],int n) 
// { 
// int left=0; //首元素下标 
// int right=n-1; //尾元素下标 
// int temp; //用于三角交换 
// while(left<right) 
// {
// temp=p[left]; 
// p[left]=p[right]; 
// p[right]=temp; 
// left++; 
// right--;
// } 
// }
// void OutputArray(int p[],int n)//输出 
// { 
// int i; 
// for(i=0;i<n;i++) 
// printf("%d",p[i]); 
// printf("\n");
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int n;
// 	double sum,aver;
// 	scanf("%d",&n);
// 	int *p=(int *)malloc(sizeof(int)*n);
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d",&*(p+i));
// 		sum+=*(p+i);
// 	}
// 	aver=sum/n;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n-1-i;j++)
// 		{
// 			int temp=*(p+j);
// 			*(p+j)=*(p+j+1);
// 			*(p+j+1)=temp;
// 		}
// 	}
// 	for(int i=0;i<n;i++)
// 	{
// 		printf("%d ",*(p+i));
// 	}
// 	printf("\n%lf",aver);
// }



// #include<stdio.h>
// int isprime(int n)
// {
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//             return 0;
//     }
//         return 1;
// }
// int main()
// {
//     int cnt=0;
//     for(int i=100;i<=200;i++)
//     {
//         if(isprime(i))
//         {
//             printf("%d ",i);
//             cnt++;
//             if(cnt%5==0)
//                 printf("\n");
//         }
//     }
//     printf("%d",cnt);
//     return 0;
// }



#include <stdio.h>
int gcd ( int dividend,int divider) ;
int main()
{
	printf("%d\n", gcd ( 15,9 ) );
	return 0;
}

int gcd (int dividend,int divider)
{
	int temp;
	if (dividend<divider)
	{
		temp=dividend;
		dividend=divider;
		divider=temp;
	}
	if (dividend%divider==0)
	{
		return divider;
	}
	else
	{
		return gcd(divider,dividend%divider) ;
	}
}