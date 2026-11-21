#include <iostream>
using namespace std;
int main()
{
	int a,b,c=0,n;
	cout<<"enter a number";
	cin>>a;
	n=a;
	while(a>0)
	{
		b=a%10;
		c=b*b*b+c;
		a=a/10;
	}
	if(n==c)
	{
		cout<<"the number is armstrong";
	}
	else
	{
		cout<<"the number is not armstrong";
	}
}
