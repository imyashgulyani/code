#include <iostream>
using namespace std;
template <class T1,class T2>
void disp(T1 x,T2 y)
{
	cout<<x<<" "<<y<<endl;
}
int main()
{
	disp(10,20);
	disp(10,'A');
}
