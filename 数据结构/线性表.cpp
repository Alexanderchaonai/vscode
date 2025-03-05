#include<iostream>
#include<string>
using namespace std;

struct  book
{
    int isbn;
    string bookName;
    double price;
};
int main()
{
    book b;
    b.isbn=76745;
    b.bookName="dednwiidw";
    //strcpy(b.bookName,"abcdefg");    如果想使用strcpy，只能用于处理C风格的字符串，也就是用字符数组
    b.price=90;
}


