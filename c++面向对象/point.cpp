#include"point.h"
//设置x，获取x，设置y，获取y
void Point::setx(int x)
{
    m_x=x;
}
int Point::getx()
{    
    return m_x;
}
void Point::sety(int y)
{
    m_y=y;
}
int Point::gety()
{    
    return m_y;
}
//这个cpp文件中将所有的操作都写了进去