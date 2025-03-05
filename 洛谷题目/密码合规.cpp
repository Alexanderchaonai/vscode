#include<iostream>
#include<ctype.h>
using namespace std;
string t;
bool invaild[200];
int up,low,num,spe;
int main()
{
    string s;
    cin>>s;
    bool incode=true;
    int cnt;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==',')
        {
            if(incode==true)
            { 
                incode=false;
                if(cnt<6||cnt>12)
                {
                    invaild[i]=true;
                }
                if(up==0)
                {
                    if(low==0)
                    {
                        invaild[i]=true;
                    }
                    else
                    {
                        if(num==0)
                        {
                            invaild[i]=true;
                        }
                        else
                        {
                            if(spe==0)
                            {
                                invaild[i]=true;
                            }
                        }
                    }
                }
                else
                {
                    if(spe==0)
                    {
                        invaild[i]=true;
                    }
                    else
                    {
                        if(low==0)
                        {
                            if(num==0)
                            {
                                invaild[i]=true;
                            }
                        }
                    }
                }
                cnt=0;
                up=0,low=0,num=0,spe=0;
            }
            else
                incode=true;

        }
        if(s[i]!=','&&incode==true)
        {
            cnt++;
            if(isupper(s[i]))
                up++;
            else if(islower(s[i]))
                low++;
            else if(isdigit(s[i]))
                num++;
            else if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$')
                spe++;
            else
                invaild[i]=true;
        }
    }
    bool inpas=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==','&&inpas==true)
        {
            inpas=false;
            
        }
    }
}
//这题可以在我的代码的基础上最小幅度的修改吗，虽然我感觉我的逻辑很混乱，主要是想通过逗号来判断当前是否在单词内，然后如果不合法就把invaild数组设置为true，然后再遍历一遍