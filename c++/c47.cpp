#include <iostream>
#include <math.h>
using namespace std;
void binary(int a)
{
	int i,b=0,c,count=0;
	while(a>0)
	{
		c=a%10;
		b=b+pow(2,count)*c;
		count++;
		a=a/10;
	}
	cout<<"the number is "<<b;
}
int main()
{
	int a;
	cout<<"enter a number";
	cin>>a;
	binary(a);
}

