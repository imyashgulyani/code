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
    void a(int x,int y)
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
    square s1;
    s1.a(4);
    ptr=&s1;
    ptr->area();
    rectangle r1;
    r1.a(4,3);
    ptr=&r1;
    ptr->area();
}