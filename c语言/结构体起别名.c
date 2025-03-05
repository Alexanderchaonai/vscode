/*别名格式：
typedef struct
{
    成员1；
    成员2；
}别名;
*/
//定义一个结构体表示游戏人物
//属性有：姓名，攻击力，防御力，血量
//要求：把三个游戏人物放入到数组当中，并遍历数组
#include<stdio.h>

typedef struct character
{
    char name[1000];
    int attackPower;
    int defensePower;
    int blood;
}ch;



int main()
{
    ch p1={"知更鸟",3900,2000,3400};
    ch p2={"砂金",1500,4000,3500};
    ch p3={"流萤",2500,2000,3300};
    ch gameArr[3]={p1,p2,p3};
    for(int i=0;i<3;i++)
    {
        ch temp=gameArr[i];
    printf("游戏人物的姓名为%s,攻击力为%d,防御力为%d,血量为%d\n",temp.name,temp.attackPower,temp.defensePower,temp.blood);
    }
}