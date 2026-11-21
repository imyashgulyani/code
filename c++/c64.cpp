#include <iostream>
using namespace std;
class A
{
	protected:
		char a[100]
		public:
			void dispa()
			{
				fgets(a,sizeof(a),stdin);
			}
		};
class B:public A
{
	protected:
		char b[100];
		public:
			void dispb()
			{
				fgets(b,sizeof(b),stdin);
			}
		};
            int main()
            {
            	B b1;
            	b1.dispa();
            	b1.dispb();
			}
