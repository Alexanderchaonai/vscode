#include<iostream>
#include<time.h>
#include<Windows.h>
#include<cmath>
#include<vector>
using namespace std;
const int w=100,h=27;//表示宽度和高度，控制台窗口的尺寸
string icon[h];//每个点的内容，字符串数组，每个元素都用来存储一个字符串
string last[h];
struct coordinate
{
    int x,y;
};
coordinate xy[3];
class GameElement
{
public:
    int x=0,y=0;
    char icon=0;
    GameElement(int x,int y,int icon):x(x),y(y),icon(icon){}//初始化列表
    ~GameElement(){};
};

class Reward: public GameElement
{
public:
    Reward(int x,int y,char icon):GameElement(x,y,icon){}
public:
    void generate()
    {  
        x--;//奖励向左移动
        //y=rand()%(h-2)+1;
        if(x<1||y<1||y>h-2)
        {
            x=rand()%(w-2)+1;
            y=rand()%(h-2)+1;
        }
    }
    void disappear()
    {
        x=' ';
        y=' ';
    }
};

class Obstacle: public GameElement
{
public:
    Obstacle(int x,int y,char icon):GameElement(x,y,icon){}
public:
    void generate()
    {
        x--;//障碍物向左移动
        //y=rand()%(h-2)+1;
        if(x<1||y<1||y>h-2)
        {
            x=rand()%(w-2)+1;
            y=rand()%(h-2)+1;
        }
    }
};

class Player:public GameElement
{
public:
    Player(int x,int y,char icon):GameElement(x,y,icon){}
    int score=0;//分数属性，分数只属于玩家
    
};
//int xy[7]={0,0,0,0,0,0,0};//这个数组用来存储玩家连续三次移动的坐标，如果是递增或者递减，说明玩家在连续朝一个地方移动，此时可以加速
bool acclerate(coordinate a,coordinate b,coordinate c)
{
    if((a.x==b.x&&b.x==c.x)
       ||(a.x<b.x&&b.x<c.x)
       ||(a.x>b.x&&b.x>c.x)
       ||(a.y==b.y&&b.y==c.y)
       ||(a.y<b.y&&b.y<c.y)
       ||(a.y>b.y&&b.y>c.y))
        return 1;
    return 0;
}

Player p(2,h-2,'p');//初始化玩家
Reward apple(0,0,'a');//初始化奖励
vector <Obstacle> ob;

void initialize_map()//初始化屏幕
{
    for(int y=0;y<h;y++)
    {
        if(y==0||y==h-1)
        {
            icon[y]=string(w,'#');//设置边界符号标记
        }
        else
        {
            icon[y]=string(w,' ');//一种数组的填充方式，相当于创建一个h行，每行w个字符的一种填充方式
            icon[y][0]=icon[y][w-1]='#';//竖着的也要填
        }
    }
    for(int y=0;y<h;y++)//拷贝屏幕初始状态
        last[y]=icon[y];
}

void draw()//绘制屏幕
{
    for(int y=0;y<h;y++)
    {
        icon[y]=last[y];//拷贝上一次
    }
    icon[apple.y][apple.x]=apple.icon;
    icon[apple.y-1][apple.x]=apple.icon;
    icon[apple.y+1][apple.x]=apple.icon;
    icon[apple.y][apple.x-1]=apple.icon;
    icon[apple.y][apple.x+1]=apple.icon;//生成苹果的地方
    for(int i=0;i<ob.size();i++)
    {
        icon[ob[i].y][ob[i].x]=ob[i].icon;
        icon[ob[i].y-1][ob[i].x]=ob[i].icon;
        icon[ob[i].y][ob[i].x-1]=ob[i].icon;
        icon[ob[i].y-1][ob[i].x-1]=ob[i].icon;//绘制障碍物
    }
    icon[p.y][p.x]=p.icon;
    for(int i=0;i<h;i++)
    {
        cout<<icon[i]<<endl;
    }
    cout<<"score="<<p.score;
}

//finish函数的作用，保证每个容器内的障碍物
bool finish()
{
    for(int i=0;i<ob.size();i++)
    {
        if((p.x==ob[i].x&&p.y==ob[i].y)||(p.x==ob[i].x&&p.y==ob[i].y-1)||(p.x==ob[i].x-1&&p.x==ob[i].y)||(p.x==ob[i].x-1&&p.y==ob[i].y-1))
        {
            if(p.score<5)
                return true;
            else
            {
                p.score-=5;
            }
        }
        ob[i].x--;
        if(ob[i].x<1)
        {
            ob[i].generate();
            // ob[i].x=rand()%(w-3)+2;
            // ob[i].y=rand()%h;
        }
    }
    return false;
}

int main()
{
    int count=0;
    srand(time(NULL));
    initialize_map();
    while(!finish())
    {
        apple.generate();
        xy[0]=xy[1];
        xy[1]=xy[2];
        xy[2].x=p.x,xy[2].y=p.y;
        if(!acclerate(xy[0],xy[1],xy[2]))
        {
            if(GetAsyncKeyState(VK_UP)&&p.y>0)
            {
                p.y--;
            }
            if(GetAsyncKeyState(VK_DOWN)&&p.y<h-1)
            {
                p.y++;
            }
            if(GetAsyncKeyState(VK_LEFT)&&p.x>0)
            {
                p.x--;
            }
            if(GetAsyncKeyState(VK_RIGHT)&&p.x<w-1)
            {
                p.x++;
            }
        }
        else
        {
            if(GetAsyncKeyState(VK_UP)&&p.y>0)
            {
                p.y-=3;
            }
            if(GetAsyncKeyState(VK_DOWN)&&p.y<h-1)
            {
                p.y+=3;
            }
            if(GetAsyncKeyState(VK_LEFT)&&p.x>0)
            {
                p.x-=3;
            }
            if(GetAsyncKeyState(VK_RIGHT)&&p.x<w-1)
            {
                p.x+=3;
            }
        }
        if(acclerate(xy[0],xy[1],xy[2]))
        if(sqrt((p.x-apple.x)*(p.x-apple.x)+(p.y-apple.y)*(p.y-apple.y))<=3)//降低游戏难度，和苹果之间的距离小于一定即可
        {
            p.score++;
            if(p.score>=5&&p.score%5==0)
            {
            ob.push_back(Obstacle(rand()%(w-3)+2,rand()%10,'A'));
            }
            apple.disappear();
        }
        //if(p.x==ob.x&&p.y==ob.y)break;单独写一个finish函数判断结束条件
        Sleep(125);
        system("cls");//清屏
        draw();//每次移动完都要重新绘制屏幕
    }
    return 0;
}