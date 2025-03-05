// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     string s[5005];
//     int a[5005];
//     for(int i=1;i<=n;i++)
//     {
//         cin>>s[i]>>a[i];
//     }
//     string r[25];
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     for(int i=1;i<=k;i++)
//         getline(cin,r[i]);
//     int pos=-1;
//     for(int i=1;i<=k;i++)
//     {
//         bool flag=false;
//         bool found=false;
//         string c;
//         for(int j=0;j<r[i].size();j++)
//         {
//             if(r[i][j]=='{')
//                 flag=true;
//             if(flag)
//             {
//                 c+=r[i][j];
//                 if(r[i][j]=='}')
//                     break;
//             }
//         }
//         for(int m=1;m<=n;m++)
//         {
//             if(c==s[m])
//             {
//                 found=true;
//                 pos=m;
//             }
//         }
//         for(int j=1;j<r[i].size();j++)
//         {
//             if(r[i][j]=='{')
//             {
//                 r[i][j]=(a[pos]);
//             }
//             for(int p=j+1;p<r[i].size();p++)
//             {
//                 r[i][p]=r[i][p+1];
//             }
//         }
//         if(found)
//         cout<<r[i]<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<string>
#include<limits>
using namespace std;
string a[5005],b[5005];
int main()
{
    int n,k;
    cin>>n>>k;
    string c;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        c="{";
        c+=a[i];
        c+="}";
        a[i]=c;
    }
    string s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1;i<=k;i++)
    {
        getline(cin,s);
        for(int j=1;j<=n;j++)
        {
            int start=s.find(a[j]);
            while(start!=-1)
            {
                s=s.replace(start,a[j].length(),b[j]);
                start=s.find(a[j]);
            }
        }
        cout<<s<<endl;
    }
}