#include<iostream>
using namespace std;
//这种直接使用循环来删除的做法是很不好的，因为无法处理数组访问越界的问题，因此我们需要使用别的方法来删除元素
/*所以非要这么做的话就要舍弃循环，直接判断最后的几位是不是有er，ly，ing，如果有，就把这几个位置用空格填充
也就相当于删除掉了
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[len-1]=='r'&&s[len-2]=='e')
        {
        s[i+2]=s[i];
        cout<<s[i];
        }
        else if(s[len-1]=='y'&&s[len-2]=='l')
        {
        s[i+2]=s[i];
        cout<<s[i];
        }
        else if(s[len-1]=='g'&&s[len-2]=='n'&&s[len-3]=='i')
        {
        s[i+3]=s[i];
        cout<<s[i];
        }
        else
        cout<<s[i];
    }
}*/
//方法2：STL  string做法

string s;
int main()
{
	cin>>s;																	//输入 
	int siz=s.size();														//取得大小 
	if(s[siz-1]=='y'&&s[siz-2]=='l'){
        s[siz-1]='\0';
        s.pop_back();
    }				//如果结尾为 ly ,删除 ly 
	else if(s[siz-1]=='r'&&s[siz-2]=='e')s.erase(siz-2,2);					//如果结尾为 er ,删除 er 
	else if(s[siz-1]=='g'&&s[siz-2]=='n'&&s[siz-3]=='i')s.erase(siz-3,3);	//如果结尾为 ing ,删除 ing
	cout<<s<<endl;															//输出 
	return 0;
}
/*在这篇题解中用到了 STL 中的 string 类，简单介绍一下在这里用到的类方法：
- `string::erase( pos , len )` : 从第 pos 个位置开始，擦除之后的 len 个字符。
- `string::size()` : 返回该字符串的长度。    */
