#include <iostream>
using namespace std;
int main()
{
	int a,c=0,b,n;
	cout<<"enter a number";
	cin>>a;
	n=a;
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	if(n==c)
	{
		cout<<"the number is palindrome";
	}
	else
	{
		cout<<"the number is not palindrome";
	}
	
}
