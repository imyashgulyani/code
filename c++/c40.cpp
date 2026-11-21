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
	int i,b;
	cout<<"enter position to enter the number";
	cin>>b;
	for(i=n;i>b-1;i--)
	{
		a[i]=a[i-1];
		
	}
	cout<<"enter the number";
	cin>>a[b-1];
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
	n++;
	disp(a,n);
}
