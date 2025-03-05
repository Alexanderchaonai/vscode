// #include <stdio.h>
// #include <string.h>

// struct student {
//     char sno[10];
//     char name[20];
//     int math;
//     int english;
//     int chinese;
//     int sum;
// };

// int Count;

// void print(struct student stu) {
//     printf("%s %s %d %d %d %d\n", stu.sno, stu.name, stu.math, stu.english, stu.chinese, stu.sum);
// }

// void query_stu(struct student s[], char name[]) { // 查询
//     /*********Begin*********/
//     for (int i=0;i<Count;i++) {
//         if (strcmp(s[i].name,name)==0) {
//             print(s[i]);
//         }
//     }
//     /*********End**********/
// }

// void delete_stu(struct student s[], char sno[]) { // 删除
//     for (int i=0;i<Count;i++) {
//         if (strcmp(s[i].sno,sno) == 0) {
//             // 将后面的学生前移
//             for (int j = i; j < Count - 1; j++) {
//                 s[j] = s[j + 1];
//             }
//             Count--; // 学生数量减1
//             break;   // 退出循环
//         }
//     }
//     // 删除后输出所有学生信息
//     for (int i = 0; i < Count; i++) {
//         print(s[i]);
//     }
// }

// void update_stu(struct student s[], char sno[], int math, int english, int chinese) { // 修改
//     for (int i = 0; i < Count; i++) {
//         if (strcmp(s[i].sno, sno) == 0) {
//             s[i].math = math;
//             s[i].english = english;
//             s[i].chinese = chinese;
//             s[i].sum = s[i].math + s[i].english + s[i].chinese;
//             break; // 找到后修改并退出循环
//         }
//     }
//     // 修改后输出所有学生信息
//     for (int i = 0; i < Count; i++) {
//         print(s[i]);
//     }
// }

// int main(void) {
//     int n, q;
//     struct student students[50];
//     scanf("%d%d", &n, &q);
//     Count = n;

//     // 读取 n 个学生的信息
//     for (int i = 0; i < n; i++) {
//         scanf("%s %s %d %d %d", students[i].sno, students[i].name, &students[i].math, &students[i].english, &students[i].chinese);
//         students[i].sum = students[i].math + students[i].english + students[i].chinese;
//     }

//     // 处理 q 个操作
//     for (int i = 0; i < q; i++) {
//         int op;
//         scanf("%d", &op);
//         if (op == 1) {
//             char name[20];
//             scanf("%s", name);
//             query_stu(students, name);
//             // 查询后已经在 query_stu 中输出结果
//         } else if (op == 2) {
//             char sno[10];
//             int math, english, chinese;
//             scanf("%s %d %d %d", sno, &math, &english, &chinese);
//             update_stu(students, sno, math, english, chinese);
//             // 修改后已经在 update_stu 中输出所有学生信息
//         } else if (op == 3) {
//             char sno[10];
//             scanf("%s", sno);
//             delete_stu(students, sno);
//             // 删除后已经在 delete_stu 中输出所有学生信息
//         }
//     }
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int Count;
struct student{
    char sno[20],name[20];
    int math,english,chinese,sum;
};

void print(struct student stu){
    printf("%s %s %d %d %d %d\n",stu.sno,stu.name,stu.math,stu.english,stu.chinese,stu.sum);
}

void query_stu(struct student s[],char *name){//查询
    /*********Begin*********/
    for(int i=0;i<Count;i++)
    {
        if(strcmp(s[i].name,name)==0)
        {
            print(s[i]);
            //break;
        }
    }
    /*********End**********/
}

void delete_stu(struct student s[],char *sno){//删除
    /*********Begin*********/
    for(int i=0;i<Count;i++)
    {
        if(strcmp(s[i].sno,sno)==0)
        {
            for(int j=i;j<Count-1;j++)
            {
                s[j]=s[j+1];
            }
            Count--;
            break;
        }
    }
    for(int i=0;i<Count;i++)
        print(s[i]);

    /*********End**********/
}

void update_stu(struct student s[],char *sno,int math,int english,int chinese){//更新
    /*********Begin*********/
    for(int i=0;i<Count;i++)
    {
        if(strcmp(s[i].sno,sno)==0)
        {
            s[i].math=math;
            s[i].english=english;
            s[i].chinese=chinese;
            s[i].sum=math+english+chinese;
            break;
        }
    }
    for(int i=0;i<Count;i++)
        print(s[i]);

    /*********End**********/
}

int main(void)
{
    int n,q;
    struct student students[50];
    scanf("%d%d",&n,&q);
    Count=n;
    for(int i=0;i<n;i++){
        /*********Begin*********/
        scanf("%s %s %d %d %d",students[i].sno,students[i].name,&students[i].math,&students[i].english,&students[i].chinese);
        students[i].sum = students[i].math + students[i].english + students[i].chinese;
        /*********End**********/
    }
    while(q--){
        int op;
        scanf("%d",&op);
        char sno[20],name[20];
        if(op==1){
            scanf("%s",name);
            query_stu(students,name);
        }
        else if(op==2){
            int a,b,c;
            scanf("%s%d%d%d",sno,&a,&b,&c);
            update_stu(students,sno,a,b,c);
        }
        else{
            scanf("%s",sno);
            delete_stu(students,sno);
        }
    }
    return 0;
}