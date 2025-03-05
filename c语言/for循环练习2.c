//求1-100的偶数和
#include <stdio.h>
int main()
{
int sum=0;
int i;
for (i=2;i<=100;i+=2)
{
    sum+=i; 
}
   printf("%d\n",sum);

}