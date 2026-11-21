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
void calc(int a[],int n)
{
	int i,sum;
	for(i=0;i<n/2;i++)
	{
		sum=a[i]+a[n-i-1];
		cout<<sum<<endl;
	}
	if(n%2!=0)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[100],n;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter"<<n<<"numbers";
	input(a,n);
	cout<<"Output"<<endl;
	calc(a,n);
}
