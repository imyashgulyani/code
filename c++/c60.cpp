#include <iostream>
using namespace std;
class add
{
	int a,b,c,d;
	public:
		add(int x,int y)
		{
			a=x;
			b=y;
			c=0;
		}
		add(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void sum()
		{
			d=a+b+c+d;
		}
		void disp()
		{
			cout<<"addition = "<<d<<endl;
		}
	};
		int main()
		{
			add a1(10,20),a2(10,20,30);
				a1.sum();
				a2.sum();
				a1.disp();
				a2.disp();
		}

