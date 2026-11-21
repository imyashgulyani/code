#include <iostream>
#include <string>
using namespace std;
class book
{
	int p;
	char a[100],n[100];
	public:
	void getdata()
	{
		cin>>p>>a>>n;
	}
	void disp()
	{
		cout<<p<<"  "<<a<<"  "<<n;
	}
};
int main()
{
	book a1;
	a1.getdata();
	a1.disp();
}
