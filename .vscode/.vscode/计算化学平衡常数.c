#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct material
{
    char name;
    double begin;
    double aver;
};
char s[1000];
struct material m[1000];
// double temp1[1000];
// double temp2[1000];
int main()
{
    int n;
    fgets(s,sizeof(s),stdin);
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++)
    {
        scanf("%s %lf %lf",m[i].name,&m[i].begin,&m[i].aver);
    }
    int pos1,pos2;
    for(int i=0;i<strlen(s);i++)//遍历式子
    {
        if(s[i]=='-'&&s[i+1]=='>')
        {
            for(int j=i-1;j>0;j++)//从前往后找到加号
            {
                if(s[j]=='+')
                {
                    pos1=s[j];
                    break;
                    // for(int k=1;k<=n;k++)//遍历输入的结构体数组，找到匹配的反应物
                    // {
                    //     if(strcmp(s[j+1],m[k].name)==0)
                    //     {
                    //         temp1[index1++]=m[k].aver-m[k].begin;
                    //         break;
                    //     }
                    // }
                }
            }
            for(int j=i+2;j<strlen(s);j++)//从后往前找到加号
            {
                if(s[j]=='+')
                {
                    pos2=s[j];
                    break;
                    // for(int k=1;k<=n;k++)
                    // {
                    //     if(strcmp(s[j-1],m[k].name)==0)
                    //     {
                    //         temp2[index2++]=m[k].aver-m[k].begin;
                    //         break;
                    //     }
                    // }
                }
            }
        }
    }
    //在s字符串里面找到了所需的反应物和生成物的界限，再去结构体数组里面找匹配的并计算
    double fenmu=1;
    double fenzi=1;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(m[i].name,pos1)==0)
        {
            for(int j=1;j<=i;j++)
            {
                fenmu*=pow((m[i].aver),(m[i].begin-m[i].aver));
            }
        }
        if(strcmp(m[i].name,pos2)==0)
        {
            for(int j=i;j<=n;j++)
            {
                fenzi*=pow((m[i].aver),m[i].aver);
            }
        }
    }
    printf("%ld",fenzi/fenmu);


}