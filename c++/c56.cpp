#include <iostream>
using namespace std;
class add
{
	int a,b,c;
	public:
		add();
		void sum();
		void disp();
};
add::add()
{
	a=10;
	b=20;
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
	add a1;
	a1.sum();
	a1.disp();
}
