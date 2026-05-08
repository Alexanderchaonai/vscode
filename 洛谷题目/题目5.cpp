// #include<iostream>
// using namespace std;
// string s;
// int main()
// {
//     int T;
//     cin>>T;
//     int n,m,k;
//     while(T--)
//     {
//         cin>>n>>m>>k;
//         cin>>s;
//         int i;
//         bool flag=false;
//         for(i=0;i<s.size();)
//         {
//             if(s[i]=='L')
//             {
//                 if(i+m<n)
//                 {
//                     if(s[i+m+1]=='C')
//                     {
//                         for(int j=i+m;j>i;j--)
//                         {
//                             if(s[j]=='L')
//                             {
//                                 i=j;
//                                 break;
//                             }
//                         }
//                     }
//                     else if(s[i+m+1]=='W')
//                     {
//                         k--;
//                         if(k==0)
//                         {
//                             if(s[i+m+2]=='W'||s[i+m+2]=='C')
//                             {
//                                 cout<<"NO"<<endl;
//                                 flag=true;
//                                 break;
//                             }
//                             else
//                                 i++;
//                         }
//                     }
//                 }
//                 else
//                 {
//                     for(int j=n-1;j>i;j--)
//                     {
//                         if(s[j]=='L')
//                         {
//                             i=j;
//                             break;
//                         }
//                     }
//                 }
//             }
//             else if(s[i]=='W')
//             {
//                 if(s[i+1]=='C')
//                 {
//                     cout<<"NO"<<endl;
//                     continue;
//                 }
//                 else if(s[i+2]=='W')
//                 {
//                     k--;
//                 }
//                 i++;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//                 continue;
//             }
//         }
//         if(i==n)
//             cout<<"YES"<<endl;

//     }
// }


#include <iostream>
using namespace std;

string s;

int main() {
    int T;
    cin >> T;  // 输入测试用例数量

    while (T--) {  // 处理每一个测试用例
        int n, m, k;
        cin >> n >> m >> k;
        cin >> s;

        int i;
        bool flag = false;  // 用于标记是否出现 "NO"

        for (i = 0; i < s.size();) {  // 遍历字符串
            if (s[i] == 'L') {  // 当前字符为 'L'
                if (i + m < n) {  // 如果下一个位置不越界
                    if (s[i + m + 1] == 'C') {  // 如果下一个位置为 'C'
                        for (int j = i + m; j > i; j--) {
                            if (s[j] == 'L') {
                                i = j;  // 跳到新的 'L' 位置
                                break;
                            }
                        }
                    } else if (s[i + m + 1] == 'W') {  // 如果下一个位置为 'W'
                        k--;
                        if (k == 0) {
                            if (s[i + m + 2] == 'W' || s[i + m + 2] == 'C') {
                                cout << "NO" << endl;
                                flag = true;
                                break;  // 出现 'NO' 后，跳出循环
                            } else {
                                i++;
                            }
                        }
                    }
                } else {  // 处理越界情况
                    for (int j = n - 1; j > i; j--) {
                        if (s[j] == 'L') {
                            i = j;  // 跳到新的 'L' 位置
                            break;
                        }
                    }
                }
            } else if (s[i] == 'W') {  // 当前字符为 'W'
                if (s[i + 1] == 'C') {  // 如果下一个字符为 'C'
                    cout << "NO" << endl;
                    flag = true;  // 标记出现 'NO'
                    break;  // 退出当前循环
                } else if (s[i + 2] == 'W') {  // 如果下一个字符为 'W'
                    k--;
                }
                i++;
            } else {  // 当前字符为其他字符
                cout << "NO" << endl;
                flag = true;  // 标记出现 'NO'
                break;  // 退出当前循环
            }
        }

        // 如果没有标记 'NO'，输出 'YES'
        if (!flag) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
