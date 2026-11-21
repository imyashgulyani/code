#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,count=0,sum=0,n,r;
	cout<<"enter a number";
	cin>>a;
	n=a;
	while(a>0)
	{
		count++;
		a=a/10;
	}
	a=n;
	while(a>0)
	{
		r=a%10;
		sum=sum+pow(r,count);
		a=a/10;
	}
	if(sum==n)
	{
		cout<<"the number is armstrong";
	}
	else
	{
		cout<<"the number is not armstrong";
	}
}
