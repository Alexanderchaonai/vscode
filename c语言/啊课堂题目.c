//循环遍历并且存到一个数组里面再输出
/*#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int original_num=num;
    int a[10]={0};
    int count=0;
    int i=0;
    while(num!=0)
    {
        int temp=num%10;
        a[i]=temp;
        num=num/10;
        i++;
        count++;
    }
    printf("%d为%d位数\n",original_num,count);
     printf("顺序输出为：");
    for(int i=count-1;i>=0;i--)
    {
        printf("%d,",a[i]);
    }
        printf("\n");
    printf("逆序输出为：");
    for(int i=0;i<count;i++)
    {
        printf("%d,",a[i]);
    }
}*/

//求一元二次方程的根
/*
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    double d=b*b-4*a*c;
    if(d>=0)
    {
    double x1=(-b+sqrt(d))/(2*a);
    double x2=(-b-sqrt(d))/(2*a);
        if(d==0)
        printf("x1=x2=%.5lf",x1);
        else if(d>0)
        {
        printf("x1=%.5lf\n",x1);
        printf("x2=%.5lf",x2);
        }
    }
    else
    {
    double xubu1=sqrt(-d)/(2*a);
    double xubu2=sqrt(-d)/(2*a);
    printf("x1=%.5lf+%.5lfi\n",-b/(2*a),xubu1);
    printf("x2=%.5lf-%.5lfi",-b/(2*a),xubu2);
    }
}*/
//打印九九乘法表1
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("        ");
        }
        for(int k=i;k<=9;k++)
        {
            printf("%d*%d=%2d  ",i,k,i*k);
        }
        printf("\n");
    }
}*/
//打印九九乘法表2
/*
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=9;i++)
{
    for(j=1;j<=9;j++)
    {
        while(j<i)
        {
            printf("\t");
            j++;
        }
        printf("%d*%d=%d\t",i,j,i*j);
    }
    printf("\n");
}
}*/

//求Sn的值(需要简化)
/*
#include<stdio.h>
int main()
{
    int n,temp=0;
    scanf("%d",&n);
    int Sn=0;
    for(int i=1;i<=n;i++)
    {
        int a=2;
        temp=a;
        for(int j=1;j<i;j++)
        {
            temp=temp*10;
            temp=temp+a;
        }
        Sn+=temp;
    }
    printf("%d",Sn);
}*/

//分数序列求和（应该还有更好的做法）
/*
#include<stdio.h>
int main()
{
    int a1=2,a2=3,b1=1,b2=2,fenzi,fenmu;
    double sum=(double)a1/b1+(double)a2/b2,temp=0;
        for(int j=3;j<=20;j++)
        {
            fenzi=a1+a2;
            fenmu=b1+b2;
            temp=(double)fenzi/fenmu;
            a1=a2;
            a2=fenzi;
            b1=b2;
            b2=fenmu;
            sum=sum+temp;
        }
        printf("%lf",sum);
}*/

//迭代法求平方根公式
/*
#include<stdio.h>
#include<math.h>
int main()
{
    double a,temp=0,x;
    scanf("%lf",&a);
    x=a/2;
    while(fabs(temp-x)>=1e-5)
    {   temp=x;
        x=(temp+a/temp)/2;
    }
    printf("%lf",x);
}*/
//斐波那契前12
/*
#include<stdio.h>
int main()
{
    int a=1,b=1;int c;
    printf("第1月：1\n");
    printf("第2月：1\n");
    for(int i=3;i<=12;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("第%d月：%d\n",i,c);
    }
}*/
//数字逆序输出
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[15]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}*/
//冒泡排序
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}*/

//冒泡排序进阶版
/*
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
    int n;
    scanf("%d",&n);
    int a[N]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        for(int i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\n");
    }
}*/
//辗转相除法求最大公约数和欧几里得法求最小公倍数
/*
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int temp1=m,temp2=n;
    int c=m%n;
    while(c!=0)
    {
        m=n;
        n=c;
        c=m%n;        
    }
    printf("%d ",n);
    printf("%d",temp1*temp2/n);
}*/
//水仙花数
/*
#include<stdio.h>
int main()
{
    for(int i=100;i<=999;i++)
    {
        int sum=0;
        int temp=i;
        for(int j=1;j<=3;j++)
        {
            int digit=temp%10;
            sum=sum+digit*digit*digit;
            temp/=10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}*/
//输出菱形
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
        printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    } 
}*/

//字符串加密
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    scanf("%s",str); 
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]='z'-(str[i]-'a');//计算字母相对于 a 的位置，然后从 z 开始减去这个位置，得到加密后的字母。
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
        str[i] ='Z'-(str[i]-'A');
        }
        if(str[i]>='0'&&str[i]<='9')
        continue;
    }
    printf("%s\n",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]='z'-(str[i]-'a');
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]='Z'-(str[i] - 'A');
        }
        if(str[i]>='0'&&str[i]<='9')
        continue;
    }
    printf("%s",str);
}*/
//杨辉三角
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[20][20]={0};
    for(int i=0;i<n;i++)
    {
        a[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            if(j==i)
            {
                a[i][j]=1;
            }
            else
            {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            {
                printf("%d",a[i][j]);
            }
            else
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}*/

/*---------------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    int i=0;
    if(strlen(a)==strlen(b))
    {
        int sum=0;
        while(a[i]!='\0'&&b[i]!='\0')
        {
                sum=sum+(a[i]-b[i]);
        i++;
        }
        printf("%d\n",sum);
    }
    if(strlen(a)>strlen(b))
    {
        int sum=0;
        while(a[i]!='\0')
        {
            sum=sum+((a[i])-(b[i]));
            i++;
        }
        printf("%d",sum);
    }
    if(strlen(a)<strlen(b))
    {
        int sum=0;
        while(b[i]!='\0')
        {
            sum=sum+((b[i])-(a[i]));
            i++;
        }
        printf("%d",sum);
    }
}*/



/*
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int i=0;
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            printf("%d\n",a[i]-b[i]);
            return 0;
        }
        i++;
    }
    int sum=0;
    while (a[i] != '\0')
    {
        sum += a[i];
        i++;
    }

    // 如果 b 比 a 长，将 b 中剩余字符的 ASCII 值累加
    while (b[i] != '\0')
    {
        sum -= b[i];
        i++;
    }

    // 输出剩余字符的 ASCII 值之和
    printf("%d\n", sum);

    return 0;
}
*/




/*
    if(a[i]!='\0')
    {
        printf("%d\n",a[i]);
    }
    else if(b[i]!='\0')
    {
        printf("%d\n",-b[i]);
    }
    else
    {
        printf("0\n");
    }
    return 0;*/

/*
#include<stdio.h>
#define M 3
#define N 4
int main()
{
    int a[M][N]; 
    int i,j,max,row=0,colum=0; 
    输入M*N个数
    for(i=0; i<M; i++)              // 控制行 
      for(j=0; j<N; j++)            // 控制列 
      	{ 
          scanf("%d",&a[i][j]);   // 输入数组元素 
        } 
    max=a[0][0];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                row=i;
                colum=j;
            }
        }
    }
}*/

/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={0};
    int index=0;
    for(int j=1;j<=n;j++)
    {   int sum=0;
        int b[1000]={0};
        int pos=0;
        for(int i=1;i<j;i++)
        {
            if(j%i==0)
            {
                sum+=i;
                b[pos++]=i;
            }
        }
        if(sum==j)
        {
            a[++index]=j;
            printf("%d=",j);
            for(int k=0;k<pos;k++)
            {
                printf("%d",b[k]);
                if(k!=pos-1)
                printf("+");
            }
            printf("\n");
        }
        
    }
}*/

// #include <stdio.h>
// #define N 5
// int main()
// {   
// 	float score[N],aver,sum=0;
//     int  i;
//     int  count=0;     
//     /********** Begin **********/
//     for(i=0;i<N;i++)
//     {
//         scanf("%f",&score[i]);
//         sum=sum+score[i];
//     }
//     aver=sum/N;
//     for(int i=0;i<30;i++)
//     {
//         if(aver<score[i])
//         count++;
//     }
//     printf("aver=%f\n",aver);
//     printf("count=%d",count);

//     /********** End **********/
// 	return 0;
// } 


//矩阵相加
// #include<stdio.h>
// int a[1001][1001];
// int b[1001][1001];
// int c[1001][1001];
// int main()
// {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             scanf("%d",&a[i][j]);
//             scanf("%d",&b[i][j]);
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// #include<string.h>
// void cap(char result[],char a[],char b[])
// {
//     int i=0,j=0;
//     while(a[i]!='\0')
//     {
//         result[i]=a[i];
//         i++;
//     }
//     while (b[j] != '\0') {
//         result[i] = b[j];
//         i++;
//         j++;
//     }
//     result[i]='\0';
// }

// int main()
// {
//     int n;
//     char a[100]={0};
//     char b[100]={0};
//     char result[200]={0};
//     scanf("%s",a);
//     scanf("%s",b);
//     cap(result,a,b);
//     printf("%s\n",result);
// }


// #include<stdio.h>
// #include<stdbool.h>
// void character(char a[],int length)
// {
//     bool flag=false;
//     int max=0;
//     int pos1=0;
//     int pos2=0;
//     int cnt=0;
//     int start=0;
//     char b[100]={0};
//     for(int i=0;i<length;i++)
//     {
//         if(a[i]!=' ')
//         {
//             if(!flag)
//             {
//                 flag=true;
//                 start=i;
//                 cnt=1;
//             }
//             else
//             cnt++;
//         }
//         else
//         if(flag)
//         {
//             flag=false;
//             if(max<cnt)
//             {
//                 max=cnt;
//                 pos1=start;
//                 pos2=i-1;
//             }
//         }  
//     }
//     for(int i=pos1;i<=pos2;i++)
//     {
//         printf("%c",a[i]);
//     }
// }

// int main()
// {
//     char a[100]={0};
//     gets(a);
//     int lens=sizeof(a);
//     character(a,lens);
// }



// #include<stdio.h>

// void  fun(char s[],int num)
// {
// 	/********** Begin **********/
// 	for(int i=0;i<num;i++)
//     {
//         for(int j=0;j<num-i-1;j++)
//         {
//             if(s[j]<s[j+1])
//             {
//                 char temp=s[j];
//                 s[j]=s[j+1];
//                 s[j+1]=temp;
//             }
//         }
//     }
    
    
// 	/**********  End  **********/
// }

// int main()
// {
// 	char s[10];
// 	printf("输入8个字符的字符串:");
// 	scanf("%s",s);
// 	fun(s,8);
// 	printf("%s\n",s);
// 	return 0;
// }


// #include<stdio.h>
// #include<math.h>

// int isPrime(int a)
// {
//     int flag=0;
//     if(a<=1)
//     {
//         return 0;
//     }
//     else
//     {
//         for(int i=2;i<=sqrt(a);i++)
//         {
//             if(a%i==0)
//             {
//                 flag=1;
//                 return 0;
//             }
//         }
//         if(!flag)
//         {
//             return 1;
//         }
//     }
// }



// int main()
// {
//     int a;
//     scanf("%d",&a);
//     if(isPrime(a)) printf("%d是一个素数",a);
//     else printf("%d不是一个素数",a);
//     return 0; 

// }

// #include<stdio.h>

// void fig(long n)
// {
//     if(n<0)
//     {
//         putchar('-');
//         putchar(' ');
//         n=-n;
//     }
//     if(n/10)
//     {
//         fig(n/10);
//     }
//         putchar(n%10+'0');
//         putchar(' ');
// }




// int main()
// {
//     long n;
//     scanf("%ld",&n);
//     if(n==0){      // 如果输入的 n 是 0，则输出‘0’，结束。 
//         putchar('0'); 
//         return 0;
//     }    
//     fig(n);     // 调用数字转换函数 
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void reverse(char s[])
// {
//     int lens=strlen(s);
//     for(int i=0;i<lens/2;i++)
//     {
//         char temp=s[i];
//         s[i]=s[lens-1-i];
//         s[lens-1-i]=temp;
//     }
// }

// int main()
// {
//     char s[100];
//     scanf("%s",s);
//     reverse(s);
//     puts(s);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[15]={0};
//     int *p=a;
//     for(int i=0;i<12;i++)
//     {
//         scanf("%d",p+i);
//     }
//     for(int i=0;i<12;i++)
//     {
//         if(i==3||i==7)
//         {
//             printf("%d ",*(p+i));
//             printf("\n");
//         }
//         else
//         printf("%d",*(p+i));
//     }
// }



// #include<stdio.h>

// int main()
// {
//     int a[15] = {0};
//     int *p = a;
//     for(int i = 0; i < 12; i++)
//     {
//         scanf("%d", p + i);
//     }
//     for(int i = 0; i < 12; i++)
//     {
//         printf("%d ", *(p + i));
//         if((i + 1) % 4 == 0)
//         {
//             printf("\n"); \
//         }
//     }
//     return 0;
// }


///////////////////////////////////////////////////////////约瑟夫环
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int vis[100]={0};
//     int num=n;
//     int cnt=0;
//     for(int i=1;i<=n;i++)
//     {
//         vis[i]=1;
//     }
//     int index=0;
//     while(num>1)
//     {
//         index++;
//         if(index>n)
//             index=1;
//         if(vis[index]==1)
//         {
//             cnt++;
//             if(cnt==3)
//             {
//                 vis[index]=0;
//                 cnt=0;
//                 num--;
//             }
//         }
//     }
//     for(int i=1;i<=n;i++)
//     {
//         if(vis[i]==1)
//         {
//             printf("%d",i);
//             break;
//         }
//     }
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// int mystrcmp(char p1[],char p2[]){
// 	/*********Begin*********/
//     int length1=strlen(p1);
//     int length2=strlen(p2);
//     if(length1>length2)
//     {
//         return 1;
//     }
//     if(length1<length2)
//     {
//         return -1;
//     }
//     if(length1==length2)
//     {
//         for(int i=0;i<length1;i++)
//         {
//             if(p1[i]==p2[i])
//                 continue;
//             else if(p1[i]<p2[i])
//                 return -1;
//             else
//                 return 1;
//         }
//     }

// 	/*********End**********/
// }
// int main(void)
// {
// 	char a[110],b[110];
// 	scanf("%s%s",a,b);
// 	if(mystrcmp(a,b)>0)
// 		printf("%s", a);
// 	else
// 		printf("%s", b);


//     return 0;
// }



// #include<stdio.h>
// /*********Begin*********/
// int maxNum(int s[],int length)
// {
//     int max=-1;
//     for(int i=0;i<length;i++)
//     {
//         if(max<s[i])
//             max=s[i];
//     }
//     return max;
// }

// /*********End**********/
// int main(void)
// {
//     int n,s[110];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//         scanf("%d",&s[i]);
//     int ans;
// 	/*********Begin*********/
//     ans=maxNum(s,n);
// 	/*********End**********/
//     printf("%d",ans );
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	/*********Begin*********/
//     int n,a[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int *p=&a[0];
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",*(p+i));
//     }
// 	/*********End**********/
//     return 0;
// }



// #include<stdio.h>
// int *solve(int *s,int n,int m){
//     /*********Begin*********/
//     int b[100];
//     for(int i=0;i<n;i++)
//     {
//         b[(i+m)%n]=s[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         s[i]=b[i];
//     }
//     return s;

//     /*********End**********/
// }
// int main(void)
// {
//     int n,m,s[110];
//     scanf("%d%d",&n,&m);
//     for(int i=0;i<n;i++)
//         scanf("%d",&s[i]);
//     int *ans;
//     /*********Begin*********/
//     ans=solve(s,n,m);
//     /*********End**********/
//     for(int i=0;i<n;i++){
//         if(i==0)    printf("%d",*ans++ );
//         else    printf(" %d",*ans++ );
//     }
//     return 0;
// }


// #include<stdio.h>

// struct time
// {
//     int year;
//     int month;
//     int day;
// };
// struct time s;
// int days(struct time a)
// {
//     int daym[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//     int cnt=0;
//     for(int i=1;i<a.month;i++)
//     {
//         cnt+=daym[i];
//     }
//     cnt+=s.day;
//     if((a.year%4==0&&a.year%100!=0)||(a.year%400==0)&&(a.month>2))
//         return cnt+1;
//     return cnt;
// }
// int main()
// {
//     scanf("%d %d %d",&s.year,&s.month,&s.day);
//     int cnt=days(s);
//     printf("%d",cnt);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int year,cnt;
//     scanf("%d%d",&year,&cnt);
//     int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//     int month=1;
//     if(year%4==0&&year%100!=0||year%400==0)
//         days[2]=29;
//     while(cnt>days[month])
//     {
//         cnt-=days[month];
//         month++; 
//     }
//     if(month<10&&cnt<10)
//         printf("%d0%d0%d",year,month,cnt);
//     else if(month<10&&cnt>10)
//         printf("%d0%d%d",year,month,cnt);
//     else if(month>10&&cnt<10)
//         printf("%d%d0%d",year,month,cnt);
//     else 
//         printf("%d%d%d",year,month,cnt);
// }


//结构体
// #include<stdio.h>

// struct Stu
// {
//     long long num;
//     char name[20];
//     int score;
// };
// struct Stu stu1,stu2;
// int main()
// {
//     scanf("%lld%s%d",&stu1.num,stu1.name,&stu1.score);
//     scanf("%lld%s%d",&stu2.num,stu2.name,&stu2.score);
//     if(stu1.score<stu2.score)
//         printf("%lld %s %d",stu2.num,stu2.name,stu2.score);
//     else
//         printf("%lld %s %d",stu1.num,stu1.name,stu1.score);
// }


// #include<stdio.h>
// struct Stu
// {
//     long long num;
//     char name[20];
//     int score;
// };
// struct Stu stu[201];
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%lld%s%d",&stu[i].num,stu[i].name,&stu[i].score);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(stu[j].score<stu[j+1].score)
//             {
//                 struct Stu temp=stu[j];
//                 stu[j]=stu[j+1];
//                 stu[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%lld %s %d\n",stu[i].num,stu[i].name,stu[i].score);
//     }
//     return 0;
// }


//候选人模拟模拟模拟模拟模拟模拟模拟模拟模拟
// #include<stdio.h>
// #include<string.h>
// struct cand
// {
//     char name[20];
//     int cnt;
// };
// struct cand piao[3];
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     strcpy(piao[0].name,"Li");
//     piao[0].cnt=0;
//     strcpy(piao[1].name,"Zhang");
//     piao[1].cnt=0;
//     strcpy(piao[2].name,"Sun");
//     piao[2].cnt=0;
//     char vote[20];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%s",vote);
//         for (int j=0;j<3;j++)
//         {
//             if (strcmp(vote,piao[j].name)==0)
//             {
//                 piao[j].cnt++;
//                 break; 
//             }
//         }
//     }
//     for (int i=0;i<3;i++)
//     {
//         printf("%s:%d\n",piao[i].name,piao[i].cnt);
//     }
// }

// #include <stdio.h>
// #include <string.h>
// struct  person
// {
//     char name[8];
//     int count;
// };

// int main()
// {
//     int i,j;
//     char name[8];
//     struct  person leader[5]={"zhang",0,"sun",0,"li",0,"yang",0,"zhao",0 };
//     for(i=0;i<10;i++)
// 	{
// 		/***** 在以下一行填写代码 *****/
// 	scanf("%s",name);			                      //输入候选人姓名					 					 
// 		 for(j=0;j<5;j++)
// 		/***** 在以下一行填写代码 *****/
// 			  if(strcmp(name,leader[j].name)==0)
//               {
//                 leader[j].count++;
//                 break;
//               }     	   //若第j个候选人名字与输入的名字相同				  
// 		/***** 在以下一行填写代码 *****/
// 					                    //第j个候选人票数加1（%-10s%d）
// 	}
//     printf("投票结果：\n");
//     printf("姓名      票数\n");
//     for(j=0;j<5;j++)
//     {
//         printf("%s %d\n",leader[j].name,leader[j].count);
//     }
//         /***** 在以下一行填写代码 *****/    				   //输出各候选人的名字和票数
//     return 0;
// }				   	


// #include <stdio.h> 

// typedef struct 
// {
// 	char name[10]; 
// 	int age; 
// }STD;

// STD fun(STD std[], int n)
// {
// 	STD max; int i;
// 	/***** 在以下一行填写代码 *****/
// 	max=*std;
	
// 	for(i=1; i<n; i++)
		
// 	/***** 在以下一行填写代码 *****/
// 	if(max.age<std[i].age  )
// 		max=std[i];
	
// 	return max;
// }

// int main( )
// {
// 	STD std[5]={"aaa",17,"bbb",16,"ccc",18,"ddd",17,"eee",15 };
// 	STD max;
// 	max=fun(std,5);
// 	printf("The result:\n");
	
// 	/***** 在以下一行填写代码 *****/
// 	printf("Name:%s,Age:%d",max.name   ,max.age);
	
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define N 10
// typedef struct ss
// {
//     char num[10];
//     int s;
// } STU;
// void fun( STU a[],int n, STU *s )
// {
//     /********** Begin **********/
//    STU min=*a;
//    for(int i=0;i<n;i++)
//    {
//        if(min.s>a[i].s)
//             min=a[i];
//    }
//     *s=min;
//     /********** End **********/
// }
// int main ( )
// {
//     STU a[N]={ {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
//                 {"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} }, m;
//     int i;
//     printf("***** The original data *****\n");
//     for ( i=0; i< N; i++ )
//         printf("No = %s Mark = %d\n", a[i].num,a[i].s);
//     fun ( a,N, &m );
//     printf ("***** THE  RESULT *****\n");
//     printf ("The lowest:%s ,%d\n",m.num, m.s);
//     return 0
//-------------------------------------------------------------------------------------------------------------------------



// #include<stdio.h>

// int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
// int isleap(int y)
// {
//     if(y%4==0&&y%100!=0||y%400==0)
//         return 1;
//     else
//         return 0;
// }

// int yeartosecond(int y)
// {
//     if(isleap(y))
//         return 366*24*60*60;
//     else
//         return 365*24*60*60;
// }

// int monthtosecond(int m,int y)
// {
//     int sum=0;
//     if(isleap(y))
//         days[2]=29;
//     for(int i=1;i<=m;i++)
//     {
//         sum+=days[i]*24*60*60;
//     }
// }
// //思路：先把输入的日期对应的第一年需要经过的秒算出来，剩下的再加进去
// int main()
// {
//     int y,m,d,h,mi,s,t;
//     double sum=0;
//     scanf("%d%d%d%d%d%d%d",&y,&m,&d,&h,&mi,&s,&t);
//     if(isleap(y))
//         days[2]=29;
//     for(int month=m;month<=12;month++)
//     {
        
//     }
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #include<ctype.h>
// struct mat
// {
//     char name[200];
//     double fir;
//     double bal;
//     double xishu;
// };
// struct mat m[200];
// char s[200];
// int main()
// {
//     fgets(s,sizeof(s),stdin);
//     bool flag=0;
//     int cnt=0;
//     int num;
//     scanf("%d",&num);
//     for(int i=0;i<num;i++)
//     {
//         scanf("%s%lf%lf",m[i].name,&m[i].fir,&m[i].bal);
//         m[i].xishu=1.0;
//     }
//     // scanf("%[^\n]s",s);
//     //printf("%sadc\n",s);
//     for(int i=0;i<strlen(s);i++)
//     {
//         if(s[i]=='+'&&flag==0)
//         {
//             flag=1;
//             cnt++;
//         }
//         if(s[i]=='-')
//         {
//             flag=0;
//         }
//         // if(isdigit(s[i]))
//         // {
//         //     s[i]=s[i]-'0';
//         //     if(isdigit(s[i+1]))
//         //     {
//         //         =s[i]*10+(s[i+1]-'0');
//         //     }
//         //     else if(isupper(s[i+1]))
//         //     {

//         //     }
//         // }
//     }
//     for(int i=0;i<num;i++)
//     {
//         if(i<cnt)
//         {
//             m[i].xishu=m[i].fir-m[i].bal;
//         }
//         else
//         {
//             m[i].xishu=m[i].bal;
//         }
//     }
//     double k;
//     double fenzi=1,fenmu=1;
//     for(int i=0;i<num;i++)
//     {
//         if(i<cnt)
//         {
//             fenzi*=m[i].xishu;
//         }
//         else
//         {
//             fenmu*=m[i].xishu;
//         }
//     }
//     printf("%lf",fenzi/fenmu);
// }


// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// #include<math.h>
// struct substance {
//     char name[200];
//     double initial_conc; // 初始浓度
//     double equilibrium_conc; // 平衡浓度
//     double power; // 系数次幂（默认为1，假设在方程式中未标明系数）
// };

// struct substance subs[200]; // 存储反应物和生成物

// char equation[200]; // 化学反应方程式

// int main() {
//     // 输入化学反应方程式
//     fgets(equation, sizeof(equation), stdin);

//     int num; // 反应物和生成物总数量
//     scanf("%d", &num);

//     // 输入反应物和生成物的名称、初始浓度和平衡浓度
//     for (int i = 0; i < num; i++) {
//         scanf("%s %lf %lf", subs[i].name, &subs[i].initial_conc, &subs[i].equilibrium_conc);
//         subs[i].power = 1.0; // 默认次幂为1，可进一步扩展支持其他系数
//     }

//     double numerator = 1.0, denominator = 1.0;

//     // 根据方程式分割反应物和生成物，确定次幂
//     bool is_product = false;
//     for (int i = 0; i < strlen(equation); i++) {
//         if (equation[i] == '-') {
//             is_product = true; // 切换到生成物
//         }
//     }

//     // 计算平衡常数
//     for (int i = 0; i < num; i++) {
//         if (i < num / 2) { // 假设反应物在输入前半部分
//             denominator *= pow(subs[i].equilibrium_conc, subs[i].power);
//         } else { // 生成物在输入后半部分
//             numerator *= pow(subs[i].equilibrium_conc, subs[i].power);
//         }
//     }

//     // 输出化学平衡常数 K
//     printf("平衡常数 K = %lf\n", numerator / denominator);

//     return 0;
// }


#include <stdio.h>
int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
_Bool isLeap(int y){
  return y%4==0 && (y%100!=0||y%400==0);
}
int dateToDays(int y,int m,int d){
  int res=0;
  for(int i=1;i<y;i++)
    res+=365+isLeap(i);
  for(int i=1;i<m;i++)
    res+=month[i];
  res+=d;
  if(m>2) res+=isLeap(y);
  return res;
}
void daysToDate(int days,int *y,int *m,int *d){
  *y=1;
  while(days>365+isLeap(*y)){
    days-=365+isLeap(*y);
    (*y)++;
  }
  *m=1;
  while(days>month[*m]){
    days-=month[*m];
    (*m)++;
  }
  *d=days;
}
int main() {
  int y,m,d,h,min,s;
  printf("Enter start date and time: ");
  scanf("%d-%d-%d %d:%d:%d",&y,&m,&d,&h,&min,&s);
  double sec;
  printf("Enter seconds passed: ");
  scanf("%lf",&sec);
  int days=sec/86400;
  sec-=days*86400;
  int total=dateToDays(y,m,d)+days;
  int y2,m2,d2,h2,min2,s2;
  daysToDate(total,&y2,&m2,&d2);
  h2=h+sec/3600;
  sec-=h2*3600;
  min2=min+sec/60;
  sec-=min2*60;
  s2=s+sec;
  if(s2>=60) s2-=60,min2++;
  if(min2>=60) min2-=60,h2++;
  if(h2>=24) h2-=24,d2++;
  printf("End date and time: %d-%d-%d %d:%d:%d\n",y2,m2,d2,h2,min2,s2);
}