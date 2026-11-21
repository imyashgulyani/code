#include <iostream>
using namespace std;
class A
{
	int a;
	protected:
		int b;
		public:
			int c;
			void input()
			{
				cout<<"ener 3 numbers";
				cin>>a>>b>>c;
			}
			int geta()
			{
				return a;
			}
};
class B:public A
{
	int d;
		void sum()
		{
			d=geta()+b+c;
		}
	public:		
		void disp()
		{
			sum();
			cout<<"addition = "<<d;
		}
};
int main()
{
	B b1;
	b1.input();
	b1.disp();
}
