#include <iostream>
using namespace std;
void binary(int a);
int main()
{
	int a;
	cout<<"enter number";
	cin>>a;
	binary(a);
	
}
void binary(int a)
{
	int b[100],i=0,j;
	while(a>0)
	{
		b[i]=a%16;
		i++;
		a=a/16;
	}
	cout<<"binary pattern is ";
	for(j=i-1;j>=0;j--)
	{
		if(b[j]<10)
		{
			cout<<b[j];
		}
		else
		{
			cout<<char(b[j]+55);
		}
	}
}
