#include <iostream>
using namespace std;
class add
{
	int a,b,c;
	public:
		add(int x,int y)
		{
			a=x;
			b=y;
		}
		add(add&d)
		{
			a=d.a;
			d.b=d.b+5;
			b=d.b;
		}
		void sum()
		{
			c=a+b;
		}
		void disp()
		{
			cout<<"addition ="<<c;
		}
	};
		int main()
		{
			add a1(10,20),a2(5,8);
			a2=a1;
			add a3(a1);
			add a4(a1);
			a1.sum();
			a2.sum();
			a3.sum();
			a4.sum();
			a1.disp();
			a2.disp();
			a3.disp();
			a4.disp();
			
		}
