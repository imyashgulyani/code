#include <iostream>
using namespace std;
class A
{
	protected:
		int a,c;
		char b[100];
		public:
			void input()
			{
				cout<<"enter width,color and height of chair";
				cout<<endl;
				cin>>a>>b>>c;
			}
			void disp()
			{
				cout<<"width,color and height of char is";
				cout<<a<<"\t"<<b<<"\t"<<c<<endl;
			}
        };
class B:public A
{
	protected:
		int d;
		public:
			void input()
			{
				cout<<"enter number of legs of";
				cin>>d;
	
			}
			void disp()
			{
				cout<<"number of legs in chair are"<<d;
				cout<<endl;
			}
        };
class C:public A
{
	protected:
		int e;
		public:
			void input()
			{
				cout<<"enter number of shelf in bookshelf";
				cin>>e;
				cout<<endl;
			}
			void disp()
			{
				cout<<"number of shelf in bookshelf are"<<e;
				cout<<endl;
			}
        };
            int main()
            {
            	B b1;
            	b1.A::input();
            	b1.input();
            	b1.A::disp();
            	b1.disp();
            	C c1;
            	c1.A::input();
            	c1.input();
            	c1.A::disp();
            	c1.disp();
			}
