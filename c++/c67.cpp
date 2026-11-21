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
        	add a1(10,20),a2(5,7);
        	a3=a1+a2;
        	add a3(a1);
        	add a3(a2);
        	a3.sum();
        	a3.disp();
			        	
		}

