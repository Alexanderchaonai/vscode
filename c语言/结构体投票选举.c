/*某班经济组织野外旅游，想要在ABCD四个景点中选择其中一个
现在班上有80名同学进行投票，找出投票数最多的景点
提示:1.学生投票，用随机数模拟
    2.如果多个景点投票一样的话，A优先于B，B优先于C，C优先于D   
*/
/*编程思维分析：
A B C D  数组1
0 0 0 0  数组2
*/

/*不使用结构体，直接使用两个数组进行编写
#include<stdio.h>
#include<time.h>
#include<stdlib.h>



int main()
{
    srand(time(NULL));
    int vote[4]={0,0,0,0};
    char place[5]={'A','B','C','D'};
    for(int i=0;i<80;i++)
    {
        int num=rand()%4;
        vote[num]++;
    }
    for(int i=0;i<4;i++)
    {
    printf("%d ",vote[i]);
    printf("\n");
    }
    int maxvote=-1;
    int winningPlace;
    for(int i=0;i<4;i++)
    {
        if(vote[i]>maxvote)
        {
            maxvote=vote[i];
            winningPlace=i;
        }
    }
    printf("%c",place[winningPlace]);
}*/

//使用结构体

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct spot
{
    char name[100];
    int count;
};


int main()
{
    //1.定义数组存储四个spot类型的变量
    struct spot arr[4]={{'A',0},{'B',0},{'C',0},{'D',0}};

    //2.模拟80名同学的投票
    srand(time(NULL));
    for(int i=0;i<80;i++)
    {
        //choose有两层含义
        //含义一：表示用户的投票   0 A   1 B   2 C  3 D
        //含义二：表示arr中的索引，通过这个索引就可以获取到景点的名字和投票数量
        int choose=rand()%4;
        //choose表示同学的投票，也表示数组arr的索引
        //所以arr[choose]表示获取景点的信息(名字，数量)
        //arr[choose].count++b表示给这个景点再投一票
        arr[choose].count++;
    }
    int max=arr[0].count;
    for(int i=0;i<4;i++)
    {
        if(arr[i].count>max)
        {
            max=arr[i].count;
        }
    }
    printf("最大值为%d\n",max);

    //遍历看看
    for(int i=0;i<4;i++)
    {
        struct spot temp=arr[i];
        printf("%s %d\n",temp.name,temp.count);
    }

    //遍历数组，看谁的票数是最大值
       for(int i=0;i<4;i++)
    {
        if(arr[i].count==max)
        {
           printf("投票数最多的景点为：%s %d",arr[i].name,arr[i].count);
           break;
        }
    }


}
