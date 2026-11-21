#include <iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void geta()
			{
				cout<<"enter a number"<<endl;
				cin>>a;
			}
	    };
class B
{
	protected:
		int b;
		public:
			void getb()
			{
				cout<<"enter a number";
				cin>>b;
			}
		};
class C:public A,public B
{
	protected:
		int c;
		public:
			void getc()
			{
				cout<<"enter a number"<<endl;
				cin>>c;
			}
			void calc()
			{
				if(a>b)
				{
					if(a>c)
					{
						cout<<a<<" is greatest";
					}
					else
					{
						cout<<c<<" is greatest";
					}
				}
				else if(b>c)
				{
						cout<<b<<" is greatest";
				}
				else
				{
					cout<<c<<" is greatest";
				}
			}
		};
		    int main()
		    {
		    	C c1;
		    	c1.geta();
		    	c1.getb();
		    	c1.getc();
		    	c1.calc();
			}
