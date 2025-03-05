#include<iostream>
#include"circle.h"
class Circle
{
private:
    int m_r;//半径
    Point m_center;
public:
//设置半径，获取半径，设置圆心，获取圆心
    void setr(int r)
    {
        m_r=r;
    }
    int getr()
    {
        return m_r;
    }
    void setp(Point p)
    {
        m_center=p;
    }
    Point getp()
    {
        return m_center;
    }
};   