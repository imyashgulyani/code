#include <iostream>
using namespace std;
class add
{
	int a,b,c;
	public:
		add(int,int);
		void sum();
		void disp();
};
add::add(int x,int y)
{
	a=x;
	b=y;
}
void add::sum()
{
	c=a+b;
}
void add::disp()
{
	cout<<"addition = "<<c;
}
int main()
{
	add a1(10,20),a2(5,8);
	a1.sum();
	a2.sum();
	a1.disp();
	a2.disp();
}
