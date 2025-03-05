
/*需求：世界上最高山峰是珠穆朗玛峰，8844430毫米，假如我有一张足够大的纸，
它的厚度是0.1毫米，请问，我折叠多少次，可以折成珠穆朗玛峰的高度
*/
#include<stdio.h>

int main()
{
double width=0.1;
int time=0;
while(width<=8844430)
{
    width*=2;
    time++;
}
printf("%d\n",time);
}