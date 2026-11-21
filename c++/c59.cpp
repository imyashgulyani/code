#include <iostream>
using namespace std;
class fabbinaco
{
	int a,b;
	public:
		fabbinaco(int,int);
		void calc(int);
};
fabbinaco::fabbinaco(int x,int y)
{
	a=x;
	b=y;
	cout<<a<<"\n"<<b<<"\n";
}
void fabbinaco::calc(int n)
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
	fabbinaco f1(0,1);
	f1.calc(n);
}
