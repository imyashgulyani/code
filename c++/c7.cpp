#include <iostream>
using namespace std;
class shape
{
    public:
    int l;
    int b;
    int a;
virtual void area()=0;
};
class square:public shape
{
    public:
    square(int x)
    {
        l=x;
        b=x;
    }
    void area()
    {
        a=l*b;
        cout<<"area = "<<a;
    }
};
class rectangle:public shape
{
    public:
    rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    void area()
    {
        a=l*b;
        cout<<"area = "<<a;
    }
};
int main()
{
    shape *ptr;
    square s1(4);
    ptr=&s1;
    ptr->area();
    rectangle r1(4,3);
    ptr=&r1;
    ptr->area();
}