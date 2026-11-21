#include <iostream>
using namespace std;
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter numbers";
		cin>>a[i];
	}
}
void calc(int a[],int n)
{
	int i;
	
	for(i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
}
void disp(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[100],n;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter "<<n<<" numbers\n";
	input(a,n);
	calc(a,n);
	n--;
	disp(a,n);
}
