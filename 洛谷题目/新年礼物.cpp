#include<iostream>
using namespace std;
int main()
{
    string s,a;
    cin>>s;
    int q,l,r;
    cin>>q;
    while(q--)
    {
        a="";
        cin>>l>>r;
        l--;r--;
        //在使用字符数组的时候，在输入结束之后，最后一个位置不会自动给你加上'\0'，因此我们可以在输入a数组之前
        //先把一个空字符赋值给a，这样系统就已经自动加了'\0'，然后再输入
        for(int j=l;j<=r;j++)
            a+=s[j];
        int index=a.size();
        bool hasPrev=false;
        for(int i=index-1;i>=0;i--)
        {
            if(a[i]>'a')
            {
                a[i]--;
                for(int j=i+1;j<index;j++)
                {
                    a[j]='z';
                }
                hasPrev=true;
                break;
            }
        }
        if(!hasPrev)
        {
            cout<<"NULL"<<endl;
            cout<<"Happy Chinese New Year!"<<endl;
            continue;
        }
        cout<<a<<endl;
        bool flag=false;
        //朴素匹配算法
        for(int i=0;i<=s.size()-index;i++)//i表示主串的索引,这里可以不用遍历到末尾，只需要遍历到剩余长度小于等于index就可以了
        {
            int j=0;//j表示需要被查找的子串的索引
            while(j<index&&s[i+j]==a[j])//逐个字符比较查找，外循环从i=0开始
                j++;
            //只要j在小于index时匹配到了一个s[i+j]==a[j]，说明这个a[j]在s里面出现过，j就++继续寻找下一个
            //否则退出循环并将i++，从主串的下一个位置开始查找
            if(j==index)//如果发现j能够一直加到子串的最后一个位置，就说明成功了
            {
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<"Happy Chinese New Year!"<<endl;
        else
            cout<<"Happy New Year!"<<endl;
    }
    return 0;
}