/*math.h
    pow()幂double
    sqrt()平方根double
    ceil()向上取整double
    floor()向下取整double
    abs()绝对值,int

time.h
    time()获取当前时间

*/
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{

//1.pow
double res1= pow(2,3);
printf("%lf\n",res1);
//2.平方根
double res2=sqrt(7);
printf("%lf\n",res2);
//3.ceil(进一法)
double res3=ceil(12.3);
printf("%lf\n",res3); 
//floor（去尾法）
double res4=floor(12.3);
printf("%lf\n",res4);
//abs绝对值
int res5=abs(-113);
printf("%d\n",res5);

//形参：表示获取的当前时间是否需要在其他地方进行存储
//      一般来讲，不需要在其他地方进行存储，NULL
//返回值：long long
//结果:从1970年1月1日0：0：0开始过了多少秒的时间点
long long res6=time(NULL);
printf("%lld\n",res6);
}