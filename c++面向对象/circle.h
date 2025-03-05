#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class Circle
{
private:
    int m_r;//半径
    Point m_center;
public:
//设置半径，获取半径，设置圆心，获取圆心
    void setr(int r);

    int getr();

    void setp(Point p);

    Point getp();

};   