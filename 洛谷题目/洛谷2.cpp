// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     string min=s;
//     string t;
//     int index=1;
//     int l=1,r=l+1;
//     while(s[l]!='\0'&&s[r]!='\0')
//     {
//         while(index<=s.size())
//         {
//             if(index<l||index>r)
//                 t[index]=s[index];
//             else
//             {
//                 t[index]=s[r]-index+l;
//             }
//             index++;
//         }
//         l++,r++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string min=s;
    int n=s.size();
    for(int l=0;l<n;l++)
    {
        for(int r=l;r<n;r++)
        {
            string t=s;
            int left=l,right=r;
            while(left<right)
            {
                char temp=t[left];
                t[left]=t[right];
                t[right]=temp;
                left++;
                right--;
            }
            if(t<min)
                min=t;
        }
    }
    cout<<min<<endl;
}


// bool cmp(string a,string b)
// {
//     if(a>b)
//         return a<b;
// }

// sort(a+1,a+n+1,cmp)