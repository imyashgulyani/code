#include <iostream>
using namespace std;
class add
{
	
	public:
		add(int x,int y)
		{
			cout<<"Addition="<<x+y<<endl;
		}
		add(int x,int y,int z)
		{
			cout<<"Addition="<<x+y+z<<endl;
		}
		
	};
		int main()
		{
			add a1(10,20),a2(10,20,30);
		}

