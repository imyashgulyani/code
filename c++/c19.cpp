#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,count=0,b,n,d;
	cout<<"enter a number";
	cin>>a;
	n=a;
	while(a>0)
	{
		count++;
		a=a/10;
	}
	a=n;
	b=a*a;
	
	d=pow(10,count);
		
	if(b%d==n)
	{
		cout<<"the number is automorphic";
	}
	else
	{
		cout<<"the number is not automrphic";
	}
}
