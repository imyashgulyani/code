#include <iostream>
using namespace std;
class A
{
	protected:
		public:
			void disp()
			{
				cout<<"im in a";
			}
		};
class B:public A
{
	protected:
		public:
			void disp()
			{
				cout<<"im in b";
			}
		};
            int main()
            {
            	B b1;
            	b1.A::disp();
            	b1.disp();
			}
