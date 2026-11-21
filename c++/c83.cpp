#include <iostream>
using namespace std;
class add
{
	int a,b;
	public:
		add(int x,int y)
		{
			a=x;
			b=y;
		}
		add(add x1,add x2)
		{
			a=x1.a+x2.a;
			b=x1.b+x2.b;
		}
		void disp()
		{
			cout<<a<<endl;
			cout<<b;
		}
};
int main()
{
	add a1(10,20),a2(5,8);
	add a3(a1,a2);
    a3.disp();
}
