#include <iostream>
using namespace std;
class area
{
	private:
		int length,breadth;
	public:
		area()
		{
			length=5;
			breadth=5;
			cout<<"area is = "<<0.5*length*breadth;
		}
		area(int a,int b)
		{
			length=a;
			breadth=b;
			cout<<"area of triangle is = "<<0.5*length*breadth;
		}
};
int main()
{
	area traingle;
	area triangle(10,5);
}
