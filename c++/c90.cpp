#include <iostream>
using namespace std;
class B;
class C;
class A
{
	int a;
	public:
	void setdata();
	friend void max(A,B,C);
};
class B
{
	int b;
	public:
	void setdata();
	friend void max(A,B,C);
};
class C
{
	int c;
	public:
	void setdata();
	friend void max(A,B,C);
};
void A::setdata()
{
	cout<<"enter the number";
	cin>>a;
}
void B::setdata()
{
	cout<<"enter the number";
	cin>>b;
}
void C::setdata()
{
	cout<<"enter the number";
	cin>>c;
}
void max(A A1,B B1,C C1)
{
	if(A1.a>B1.b && A1.a>C1.c)
	{
		cout<<A1.a<<" is greatest";
	}
	else if(B1.b>A1.a && B1.b>C1.c)
	{
		cout<<B1.b<<" is greatest";
	}
	else
	{
		cout<<C1.c<<" is greatest";
	}
}
int main()
{
	A A1;
	B B1;
	C C1;
	A1.setdata();
	B1.setdata();
	C1.setdata();
	max(A1,B1,C1);
}
