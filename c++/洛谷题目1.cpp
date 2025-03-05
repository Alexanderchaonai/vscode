#include<iostream>
using namespace std;
int main()
{
    int k;
    string s;
    cin>>k>>s;
    int count=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            if(count>=k)
            {
            cout<<s[i];
            break;
            }
            else
            count=0; 
        }
        count++;
    }
    if(count<k)
    cout<<"No";
}