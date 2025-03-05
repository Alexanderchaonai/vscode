#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
//设置x，获取x，设置y，获取y
    void setx(int x);

    int getx();

    void sety(int y);

    int gety();
private:
    int m_x;
    int m_y;

};
//这个头文件中存储了所有函数，变量的定义