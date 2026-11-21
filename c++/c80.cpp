#include <iostream>
using namespace std;
class volume
{
	public:
	void cube(int x)
	{
		cout<<"volume of cube is = "<<x*x*x<<endl;
	}
	void cuboid(int x,int y,int z)
	{
		cout<<"volume of cuboid is = "<<x*y*z<<endl;
	}
	void cylinder(int x,int y)
	{
		cout<<"volume of cylinder is = "<<3.14*x*x*y;
	}
};
    int main()
    {
    	volume a1;
    	a1.cube(3);
    	a1.cuboid(3,4,5);
    	a1.cylinder(3,3);
	}
