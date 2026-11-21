#include <iostream>
using namespace std;
class volume
{
	public:
		volume(int x)
		{
			cout<<"volume of cube is = "<<x*x*x;
		}
		volume(int x,int y,int z)
		{
			cout<<"volume of cuboid is = "<<x*y*z;
		}
		volume(int x,int y)
		{
			cout<<"area of cylinder is = "<<3.14*x*y;
		}
    };
        int main()
        {
        	volume a1(10),a2(10,20,30),a3(10,20);
		}

