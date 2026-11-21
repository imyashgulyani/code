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
int sum(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int a[50],n,c;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter "<<n<<" nos\n";
	input(a,n);
	c=sum(a,n);
	cout<<"the sum of numbers is "<<c;
}

