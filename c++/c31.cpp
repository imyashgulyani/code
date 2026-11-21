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
int finding_number(int a[],int n,int b)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			c++;
		}
	}
	return c;
}
int main()
{
	int a[50],n,b,i;
	cout<<"enter size of array\n";
	cin>>n;
	cout<<"enter "<<n<<" numbers\n";

	input(a,n);
	cout<<"enter number to be searched";
	cin>>b;
	i=finding_number(a,n,b);
	if(i!=0)
	{
		cout<<"the number is present "<<i<<" times";
	}
	else
	{
		cout<<"the number is not present";
	}
}
