#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;
//判断点和圆的关系
//点类
// class Point
// {
// private:
//     int m_x;
//     int m_y;

// public:
// //设置x，获取x，设置y，获取y
//     void setx(int x)
//     {
//         m_x=x;
//     }
//     int getx()
//     {    
//         return m_x;
//     }
//     void sety(int y)
//     {
//         m_y=y;
//     }
//     int gety()
//     {    
//         return m_y;
//     }
// };
// //圆类
// class Circle
// {
// private:
//     int m_r;//半径
//     Point m_center;
// public:
// //设置半径，获取半径，设置圆心，获取圆心
//     void setr(int r)
//     {
//         m_r=r;
//     }
//     int getr()
//     {
//         return m_r;
//     }
//     void setp(Point p)
//     {
//         m_center=p;
//     }
//     Point getp()
//     {
//         return m_center;
//     }
// };      
//判断点和圆之间的关系
void isInCircle(Circle &c,Point &p)
{
    //计算两点之间的距离
    int dis=(c.getp().getx()-p.getx())*(c.getp().getx()-p.getx())+(c.getp().gety()-p.gety())*(c.getp().gety()-p.gety());
    //计算半径
    int rdis=c.getr()*c.getr();
    //判断关系
    if(dis==rdis)
        cout<<"点在圆上";
    if(dis>rdis)
        cout<<"点在圆外";
    if(dis<rdis)
        cout<<"点在圆内";
}


int main()
{
    //创建圆
    Circle c;
    c.setr(10);
    Point center;;
    center.setx(10);
    center.sety(0);
    c.setp(center);

    //创建点
    Point p;
    p.setx(10);
    p.sety(11);
    //判断关系
    isInCircle(c,p);
}