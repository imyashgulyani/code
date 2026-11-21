#include <iostream>
using namespace std;
void input(int a[],int &b);
void calc(int a[],int b);
int main()
{
	int a[100],b;
	input(a,b);
	calc(a,b);
}
void input(int a[],int &b)
{
	int i;
	cout<<"enter size of array";
	cin>>b;
	cout<<"enter number in array";
	for(i=0;i<b;i++)
	{
		cin>>a[i];
	}
}
void calc(int a[],int b)
{
	int i,t;
	for(i=0;i<b/2;i++)
	{
		t=a[i];
		a[i]=a[b-i-1];
		a[b-i-1]=t;
	}
	for(i=0;i<b;i++)
	{
		cout<<a[i]<<endl;
	}
}
