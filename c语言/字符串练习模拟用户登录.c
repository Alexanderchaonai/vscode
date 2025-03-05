/*需求：已知正确的用户名和密码，请用程序实现模拟用户登录。
总共给3次机会，登录之后，给出相应的提示
*/
#include<stdio.h>
#include<string.h>
int main()
{
    //1.定义两个变量表示正确的用户名和密码
    char rightUsername[]="Alexander";
    char rightPassword[]="1234567890";

    //2.键盘录入两个字符串，表示用户输入的用户名和密码

    //3.比较
    for(int i=1;i<4;i++)
    {
        printf("请输入的用户名");
        char username[100];
        scanf("%s",username);
        printf("请输入的密码");
        char password[100];
        scanf("%s",password);

//由于strcmp在字符串相等时返回0，而在C语言中，0被视为逻辑假（false），因此直接使用strcmp的返回值作为逻辑
//表达式的条件会导致逻辑上的反转。
        if(!strcmp(rightUsername,username)&&!strcmp(rightPassword,password))
        {
            printf("恭喜您登陆成功");
            break;
        }
        else
        {
            if(i==3)
            {
                printf("登陆失败,下辈子再登录罢");
            }
            else
            {
                printf("登陆失败，还剩下%d次登录次数\n",3-i);
            }
        }
    }
}