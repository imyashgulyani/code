#include <iostream>
using namespace std;
class volume
{
	public:
		volume(int x)
		{
			cout<<"volume of cube is = "<<x*x*x<<endl;
		}
		volume(int x,int y,int z)
		{
			cout<<"voulme of cuboid is = "<<x*y*z<<endl;+
			
		}
		volume(int x,int y)
		{
			cout<<"volume of cylinder is = "<<3.14*x*y<<endl;
		}
};
    int main()
    {
    	volume a1(10);
    	volume a2(10,10,10);
    	volume a3(10,10);
	}
