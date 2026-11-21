#include <iostream>
using namespace std;
int fact(int x);
int main()
{
	int x,n,a,i;
	cout<<"enter number(x)";
	cin>>x;
	cout<<"enter number(n)";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=a+fact(x+i)/(i+1);
	}
	cout<<"the answer is "<<a;
}
int fact(int x)
{
	int f=1;
	while(x>0)
	{
		f=f*x;
		x--;
	}
	return (f);
}
