// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     int* p=(int)malloc(n*sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         *(p+i)=(i+1)*10;
//         sum+=*(p+i);
//     }
//     printf("%d",*p);
// }

#include<stdio.h>	
#include<stdlib.h>
void purge_array(int p[],int *np);	//删除数组的重复数据，*np就是个数地址，因为要随时删除并返回
void display_array(int p[],int n);	//输出数组，n就是数组大小
int main( )
{
	int a[10],i,size;		
	printf("input 10 integers:\n");	//输入提示：输入10个整数			
	for(i=0;i<10;++i)				//从键盘输入10个整数
		scanf("%d",&a[i]);
	size=10;						//存储数据元素个数
	purge_array(a,&size);			//删除重复数据
	display_array(a,size);			//输出数组	
	return 0;
}

void purge_array(int p[],int* np) 
{ 
	int i,j,k;
	for(i=0;i<*np;++i)   		//依次选定数组数据元素
	{
        int j=i+1;			//将选定的元素与其后所有元素比较
		while(j<*np) 
			if(p[j]==p[i]) 			//如果相同就删除后者
			{ 
				for(k=j+1;k<*np-1;++k)
					p[k]=p[k+1];
				(*np)--; 			//改变数据元素个数
			}
			else 
			j++;
	}
}

void display_array (int p[],int n)
{
	int i;
	for(i=0;i<n;++i)     	 
		printf("%d\t",p[i]);
	printf("\n");
}

