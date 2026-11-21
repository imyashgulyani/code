#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A invoked"<<endl;
		}
		~A()
		{
			cout<<"destroy class A"<<endl;
		}
    };
class B:public A
{
	public:
		B()
		{
			cout<<"B invoked"<<endl;
		}
		~B()
		{
			cout<<"destroy class B"<<endl;
		}
	};
class C:public A
{
	public:
		C()
		{
			cout<<"C invoked"<<endl;
		}
		~C()
		{
			cout<<"destroy class C"<<endl;
		}
	};
class D:public B,public C
{
	public:
		D()
		{
			cout<<"D invoked"<<endl;
		}
		~D()
		{
			cout<<"destroy class D"<<endl;
		}
	};
	int main()
	{
		D D1;
	}
