#include<stdio.h>

int main()
{
    int number=17;
    int count=0;
    for(int a=2;a<=number-1;a++)
    {
        if(number%a==0)
        {
            count++;
            break;
        }
    }
        if(count==0)
        {
            printf("%d是一个质数\n",number);
        }
        else
            {printf("%d不是一个质数\n",number);
            }
        
}

