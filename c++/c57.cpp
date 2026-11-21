#include <iostream>
using namespace std;
class fabbonaci 
{
	int a,b;
	public:
		fabbonaci();
		void calc(int);
};
fabbonaci::fabbonaci()
{
	a=0;
	b=1;
	cout<<a<<"\n"<<b<<"\n";
}
void fabbonaci::calc(int n)
{
	int sum;
	for(int i=2;i<n;i++)
	{
		sum=a+b;
		cout<<sum<<endl;
		a=b;
		b=sum;
	}
}

int main()
{
	int n;
	cout<<"enter number for series";
	cin>>n;
	fabbonaci f1;
	f1.calc(n);
	
	
}
