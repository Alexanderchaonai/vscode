//需求：生成10个1-100之间的随机数存入数组，要求数据不能重复
//1.求出所有数据的和
//2.求所有数据的平均数
//3.统计有多少个数据比平均值小
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int contains(int arr[],int len ,int num);
int main()
{
    int arr[10];
    int sum=0;
    srand(time(NULL));
    int len=sizeof(arr)/sizeof(len);

    for(int i=0;i<len;)
    {
        int num=rand()%100+1;
        //存入之前，得先做一个判断，如果不存在，再进行添加,但是需要注意，如果出现重复了的话，i仍会自增，此时num的值并未
        //赋给这一轮的arr[i],因此在打印时会自动将这个为赋值的arr[i]初始化为0，因此要么加个i--，要么把i++的条件放到判断里面
        int flag=contains(arr,len,num);
        if(flag==0)
    {
        arr[i]=num;
        i++;
    }
        printf("%d\n",num);
    }
        //累加求和
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }

    int count=0;
        //求平均数
    double aver=sum/len;

    for(int i=0;i<len;i++)
    {
        if(arr[i]<aver)
        {
            count++;
        }
    }
    printf("比平均数小的有：%d\n",count);
}

    //判断num在函数中是否存在
    //如果存在返回1，不存在返回0
    int contains(int arr[],int len ,int num)
    {
    for(int i=0;i<len;i++)
    {
    //i:依次表示数组里每一个索引
    //arr[i]：依次表示获取数组里的每一个数据
        if(arr[i]==num)
        {
            return 1;
        }
    }
            return 0;
    }
