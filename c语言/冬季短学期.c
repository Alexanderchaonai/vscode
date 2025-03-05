#include<stdio.h>  
#include<malloc.h>  
#include<stdlib.h>  
typedef struct {  
        double real;  
        double i;  
}complex;  
complex m,n;
complex* res;
 complex* add(complex x, complex y){//传入两个复数  
    /*********begin*********/
    res=(complex*)malloc(sizeof(complex));
      res->real=x.real+y.real;
      res->i=x.i+y.i;
      return res;
    /*********end*********/
 }  
 complex* minus(complex x, complex y){  
    /*********begin*********/
    res=(complex*)malloc(sizeof(complex));
    res->real=x.real-y.real;
    res->i=x.i-y.i;
    return res;
    /*********end*********/
 }  
 complex* multiply(complex x, complex y){  
    /*********begin**********/
    res=(complex*)malloc(sizeof(complex));
   res->real=x.real*y.real-x.i*y.i;
   res->i=x.i*y.real+x.real*y.i;
   return res;
    /*********end*********/  
 }  
int main()  
{     
    /*********begin**********/
   char letter;
   double a,b,c,d;
   complex m,n;
   scanf("%c %lf %lf %lf %lf",&letter,&a,&b,&c,&d);
   m.real=a;
   m.i=b;
   n.real=c;
   n.i=d;
   complex* ans;
   if(letter=='+')
   {
      ans=add(m,n);
      if(ans->i<0)
        printf("%.2lf+(%.2lf)i",ans->real,ans->i);
    else
      printf("%.2lf+%.2lfi",ans->real,ans->i);
   }
   else if(letter=='-')
   {
    ans=minus(m,n);
    if(ans->i<0)
        printf("%.2lf+(%.2lf)i",ans->real,ans->i);
    else
    printf("%.2lf+%.2lfi",ans->real,ans->i);
   }
   else
   {
    ans=multiply(m,n);
    if(ans->i<0)
        printf("%.2lf+(%.2lf)i",ans->real,ans->i);
    else
    printf("%.2lf+%.2lfi",ans->real,ans->i);
   }
    return 0;
    /*********end**********/
}  
