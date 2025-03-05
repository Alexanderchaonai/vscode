#include<iostream>
using namespace std;
int main()
{
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    string s,a;
    cin>>s;
    a.resize(s.size());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-'&&(s[i-1]>='a'&&s[i-1]<='z')&&(s[i+1]>='a'&&s[i+1]>='z')||((s[i-1]>=0&&s[i-1]<=9)&&(s[i+1]>=0&&s[i+1]<=9)))
        {
            if(s[i-1]<s[i+1])
            {
                if(p3==1)
                {
                    if(p1==3)
                    {
                        for(char c=s[i-1];c<s[i+1];c++)
                        {
                            for(int j=0;j<p2;j++)
                            {
                                a=a+'*';
                            }
                        }
                    }
                    if(p1==1)
                    {
                        if((s[i-1]>='a'&&s[i-1]<='z')&&(s[i+1]>='a'&&s[i+1]>='z'))
                        {
                            for(char c=s[i-1];c<s[i+1];c++)
                            {
                                for(int j=0;j<p2;j++)
                                {
                                        a=a+c;
                                }
                            }
                        }
                    }
                    else
                    {
                        for (char c = s[i - 1] + 1; c < s[i + 1]; c++)
                        {
                            for (int j = 0; j < p2; j++)
                            {
                                a=a+(char)(c-32);
                            }
                        }
                    }
                }
                if(p3==2)
                {
                    if(p1==3)
                    {
                        for (char c = s[i + 1] - 1; c > s[i - 1]; c--)
                        {
                            for (int j = 0; j < p2; j++)
                            {
                                a += '*';
                            }
                        }
                    }
                    if(p1==1)
                    {
                        if((s[i-1]>='a'&&s[i-1]<='z')&&(s[i+1]>='a'&&s[i+1]>='z'))
                        {
                            for (char c = s[i + 1] - 1; c > s[i - 1]; c--)
                            {
                                for (int j = 0; j < p2; j++)
                                {
                                    a += c;
                                }
                            }
                        }
                        else
                        {
                            for (char c = s[i + 1] - 1; c > s[i - 1]; c--)
                            {
                                for (int j = 0; j < p2; j++)
                                {
                                    a =a+(char)(c-32);
                                }
                            }
                        }
                    }
                }
            }
            else if (s[i - 1] + 1 == s[i + 1])
            {
                a += s[i - 1];
                a += s[i + 1];
            }
            else
            {
                a=a+s[i];
            }
        }
        else
        {
            a=a+s[i];
        }
    }
    cout<<a;
}