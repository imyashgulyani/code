#include <iostream>
using namespace std;
class shape
{
    public:
    int l;
    int b;
    int a;
virtual void area(int x,int y=0)=0;
};
class square:public shape
{
    void area(int x,int y)
    {
        l=x;
        b=y;
        a=l*b;
        cout<<"area = "<<a;
    }
};
class rectangle:public shape
{
    public:
    void area(int x,int y)
    {
        l=x;
        b=y;
        a=l*b;
        cout<<"area = "<<a;
    }
};
int main()
{
    shape *ptr;
    square s1;
    ptr=&s1;
    ptr->area(4,4);
    rectangle r1;
    ptr=&r1;
    ptr->area(4,3);
}