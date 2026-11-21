#include <iostream>
using namespace std;
class A
{
	int a;
	static int b;
	public:
		void setdata(int x);
		void disp();
};
int A::b;
void A ::setdata(int x)
{
	a=x;
	b++;
}
void A::disp()
{
	cout<<a<<"  "<<b<<endl;
}
int main()
{
	A A1,A2;
	A1.setdata(10);
	A2.setdata(20);
	A1.disp();
	A2.disp();
}
