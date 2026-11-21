#include <iostream>
using namespace std;
template <class T>
class A
{
	T a,b,c;
	public:
		void input()
		{
		cin>>a>>b;	
		}
		void sum()
		{
			c=a+b;
		}
		void disp()
		{
			cout<<"Addition is = "<<c;
		}
};
int main()
{
	A <int>A1;
	A1.input();
	A1.sum();
	A1.disp();
	A <float>A2;
	A2.input();
	A2.sum();
	A2.disp();
}
