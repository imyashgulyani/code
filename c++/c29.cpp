#include <iostream>
using namespace std;
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter number";
		cin>>a[i];
	}
}
int greatest(int a[],int n)
{
	int i,c=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>c)
		{
			c=a[i];
		}
	}
	return c;
}
int smallest(int a[],int n)
{
	int i,b=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<b)
		{
			b=a[i];
		}
	}
	return b;
}
int main()
{
	int a[50],n;
	cout<<"enter size of array\n";
	cin>>n;
	cout<<"enter "<<n<<"numbers\n";
	input(a,n);
	cout<<"the maximum value in array is \n"<<greatest(a,n);
	cout<<"the minimum value in array is"<<smallest(a,n);
}
