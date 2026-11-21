#include <iostream>
using namespace std;
class A
{
	int a,b,c;
	public:
		void setdata(int,int);
		void disp();
		friend void sum(A &);
};
void A::setdata(int x,int y)
{
	a=x;
	b=y;
}
void sum(A &A1)
{
	A1.c=A1.a+A1.b;
}
void A::disp()
{
	cout<<"addition = "<<c;
}
int main()
{
	A A1;
	A1.setdata(10,20);
	sum(A1);
	A1.disp();
}
