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
		cout<<p<<"  "<<a<<"  "<<n<<endl;
	}
};
int main()
{
	book b[100];
	int i,n;
	cout<<"enter how many books to be taken";
	cin>>n;
	for(i=0;i<n;i++)
	{
		b[i].getdata();
	}
	cout<<"Display all info"<<endl;
	for(i=0;i<n;i++)
	{
		b[i].disp();
		
	}
}
