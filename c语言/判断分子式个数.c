#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct 
{
    char element[3];
    int count;
}Atom;
int main()
{
    char huaxue[100];
    char symbol[3];
    int num;
    Atom atom[50];
    int atomcount=0;
    printf("请输入分子式：");
    scanf("%s",huaxue);
    int lens=strlen(huaxue);
    for(int i=0;i<lens;)
    {
        char symbol[3]={0};//存储元素符号
        num=0;//存储元素数量

        //识别元素符号
        if(isupper(huaxue[i]))
        {
            symbol[0]=huaxue[i];
            i++;//移动到下一个元素
            if(islower(huaxue[i]))
            {
                symbol[1]=huaxue[i];
                i++;
            }
        }
        else
        {
            i++;
            continue;
        }
        //判断元素数量
        while(isdigit(huaxue[i]))
        {
            num=num*10+(huaxue[i]-'0');
            i++;
        }
        if(num==0)
            num=1;
        //检查元素是否存在，累加数量
        // int found=0;
        // for(int j=0;j<atomcount;j++)
        // {
        //     if(strcmp(atom[j].element,symbol)==0)
        //     {
        //         atom[j].count+=num;
        //         found=1;
        //         break;
        //     }
        // }
        // if(!found)
        // {
        //     strcpy(atom[atomcount].element, symbol);
        //     atom[atomcount].count = num;
        //     atomcount++;
        // }
    //printf("分子式中的原子及数量：\n");
        printf("%s:%d\n",symbol,num);
    }

    return 0;
}