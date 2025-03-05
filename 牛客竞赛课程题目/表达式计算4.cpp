#include<iostream>
#include<cmath>
using namespace std;
string s;

int zhuanshuzi(int l,int r)
{
    int num=0;
    for(int i=l;i<=r;i++)
        num=num*10+s[i]-'0';
    return num;
}
int calc(int l,int r)
{
    //第一步:找优先级最低的符号，如果有括号，优先级就会升高一级，因此这个符号肯定在括号外面
    int cnt=0;
    int pos1=-1,pos2=-1,pos3=-1;
    for(int i=l;i<=r;i++)
    {
        if(s[i]=='(')
            cnt++;
        if(s[i]==')')
            cnt--;
        if(cnt<=0)
        {
            if(s[i]=='+'||s[i]=='-')
                pos1=i;
            if(s[i]=='*'||s[i]=='/')
                pos2=i;
            if(s[i]=='^')
                pos3=i;
        }
        if(pos1==-1&&pos2==-1&&pos3==-1)//要么是一个数字，要么被多个括号包围
        {
            if(cnt==0&&s[l]=='(')//括号是匹配的，且没有找到优先级最低的运算符，那么这个括号可以直接丢掉
            {
                return calc(l+1,r-1);
            }
            if(cnt>0&&s[l]=='(')
            {
                return calc(l+1,r);
            }
            if(cnt<0&&s[r]==')')
                return calc(l,r-1);
            return zhuanshuzi(l,r);
        }
        if(pos1!=-1)
        {
            if(s[pos1]=='+')
                return calc(l,pos1-1)+calc(pos1+1,r);
            else
                return calc(l,pos1-1)-calc(pos1+1,r);
        }
        else if(pos2!=-1)
        {
            if(s[pos2]=='*')
                return calc(l,pos2-1)*calc(pos2+1,r);
            else
                return calc(l,pos2-1)/calc(pos2+1,r);
        }
        else
            if(s[pos3]=='^')
                return pow(calc(l,pos3-1),calc(pos3+1,r));
    }
    return 0;
}
//不同情况：(4+3)+();    (((4+3)+2     (4+3))))+2;
int main()
{
    cin>>s;
    printf("%d",calc(0,s.length()-1));
}