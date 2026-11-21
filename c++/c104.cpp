#include <iostream>
using namespace std;
template <class T>
class A
{
	T a,b,c;
	public:
		void input();
		void sum();
		void disp();
};
template <class T>
void A<T>::input()
{
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
}
template <class T>
void A<T>::sum()
{
	c=a+b;
}
template <class T>
void A<T>::disp()
{
	cout<<"additon ="<<c<<endl;
}
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
