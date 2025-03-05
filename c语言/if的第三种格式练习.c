#include <stdio.h>
 int main()
 {
    int score=1000;
//注意：考试分数是有上限的，因此需要注意正常数据和异常数据
if (score>0&&score<100)
{
    if (score>=85&&score<=100)
     {
        printf("A");
     }
     else if(score>=70&&score<=84)
     {
        printf("B");
     }
     else if(score>=60&&score<=69)
     {
        printf("C");
     }
     else 
     {
        printf("D");
     }
}
     else
     {
        printf("该数据输入异常");
     }
 }