#include <iostream>
using namespace std;
class area
{

	public:
		void area1(float x)
		{
			cout<<"Area of circle = "<<3.14*x*x;
		}
		void area1(int x,int y)
		{
			cout<<"Area of Rectangle = "<<x*y;
		}
		void area1(int x)
		{
			cout<<"Area of square = "<<x*x;
		}
		
    };
        int main()
        {
        	area a1;
        	a1.area1(10);
			a1.area1(10.5f);
			a1.area1(10,20);	
		}

