#include<stdio.h>
#include<stdlib.h>
//malloc:申请一片连续的空间（需要掌握）
//calloc：申请空间+数据初始化(了解即可)
//realloc：修改空间大小(了解即可)
//free：释放空间（需要掌握）
int main()
{
    //1.利用malloc申请一片连续的空间,括号里的是字节长度，比如申请100就只能存25个int
    int* p=malloc(100*sizeof(int));//此时malloc会返回这片空间的首地址
    //int*  ：指针的步长
    //p：首地址

    //int* p=calloc(100,sizeof(int))//跟malloc一样，都是直接相乘，但是里面会全部初始化(了解即可)
    //printf("%d\n",*p);
    //2.用循环赋值
    for(int i=0;i<100;i++)
    {
        //第一种赋值
        *(p+i)=(i+1)*10;
        //第二种赋值
        p[i]=(i+1)*10;
        //这里虽然还是用数组进行赋值的，但是在底层运行时，其实还是将p[i]转换成了p+i,指针p往后偏移了i个单位
        //在整体解引用，因此这里无论是写p[i]还是i[p]都是一样的，只不过后者没人这么写
        //这里可以体现数组本身就是一个指针
    }

    //3.遍历
    for(int i=0;i<100;i++)
    {
        printf("%d\n",*(p+i));
    }

    //4.扩容
    int* pp=realloc(p,200*sizeof(int));//注意，即使修改了也会保存原来的数据
        for(int i=0;i<200;i++)
    {
        printf("%d\n",*(p+i));
    }

    //5.释放空间
    //如果申请的空间不需要再使用了，记得一定要释放
    free(pp);


}