#include <iostream>
#include <math.h>
using namespace std;
class A
{
	protected:
	int a;
	public:
		void geta()
		{
			cout<<"enter number";
			cin>>a;
		}
    };
class B:public A
{
	protected:
		int b,c,s;
		public:
			void getb()
			{
				cout<<"enter number";
				cin>>b;
				c=1;
			}
			void calc()
			{
			    if(a<b)
		        {
			        s=a;
			        a=b;
			        b=s;
		        }

		        while(c!=0)
		        {
			        c=a%b;
			        a=b;
			        b=c;
		        				        
		        }
		    }
		    void disp()
		    {
		    	cout<<"hcf is "<<a;
			}
	    };
class C:public A
{
	protected:
	int c,d;
	public:
		void getc()
		{
			cout<<"enter a number";
			cin>>c;
		}
		void calc()
		{
			d=pow(a,c);
		}
        void disp()
        {
        	cout<<"power is "<<d;
		}
	};
        int main()
        {
        	B b1;
        	C c1;
        	b1.geta();
        	b1.getb();
        	b1.calc();
        	b1.disp();
        	c1.geta();
        	c1.getc();
        	c1.calc();
        	c1.disp();
		}
