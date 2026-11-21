#include <iostream>
using namespace std;
template <typename T>
void disp(T x)
{
	cout<<x<<endl;
}
int main()
{
	disp(70);
	disp(10.5);
	char A='A';
	disp(A);
}
