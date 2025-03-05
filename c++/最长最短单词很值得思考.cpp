#include<iostream>
using namespace std;
int main()
{
    string s;
    int sum=0;
    int max=0,min=999;
    int maxplace,minplace;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '||s[i]==','||s[i]=='.')
        {
            /*分隔符判断：
当遇到分隔符（空格、逗号或句号）时，表明一个单词的结束：
进入这个分支后，首先判断当前单词长度 sum：
如果 sum 大于 max，说明找到了一个新的最长单词，更新 max 并将 maxplace 设为当前索引 i（即分隔符的位置，表示这个单词的结束）。
如果 sum 小于 min，更新 min 并将 minplace 设为当前索引 i（同样表示这个单词的结束）。
重置长度计数：
当检测到分隔符后，将 sum 重置为 0，以便为下一个单词做准备。
            */
/*maxplace 的具体含义
maxplace 指的是最长单词的结束位置索引。在代码中，它的值是在遇到分隔符时更新的，代表的是分隔符所在的位置，分
隔符后面的部分不是当前单词的一部分
*/
            if(max<sum)
            {
            maxplace=i;
            max=sum;
            }
            if(min>sum)
            {
                minplace=i;
                min=sum;
            }
                sum=0;
        }
        else
        {
        sum++;    
        }
    }
    for(int i=maxplace-max;i<maxplace;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    for(int i=minplace-min;i<minplace;i++){//最短单词同理
		cout<<s[i];
	}
}











/*必须赶紧总结：在要求输入一个句子时，并且判断句子里单词的长度时，如果题目要求是输出每个单词的长度，那么这个
时候输入就直接while(cin>>s)，但是如果是要输出特定的某一个单词的长度，比如说最长的和最短的单词的长度，那么这个
时候就不能这么输入了，就要通过单词之间的空格或者逗号或者句号来判断,再通过索引来确定这个单词的位置

*/