#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"i am in A";
		}
		~A()
		{
			cout<<"destroy class A";
		}
    };
class B:public A
{
	public:
		B()
		{
			cout<<"i am in class B";
		}
		~B()
		{
			cout<<"destroy class B";
		}
	};
	int main()
	{
		B B1;
	}

