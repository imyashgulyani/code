#include <iostream>
using namespace std;
void input(int a[], int &b);
void calc(int a[], int b);
void disp(int a[], int b);
int main()
{
	int a[100],b;
	input(a,b);
	calc(a,b);
	disp(a,b);
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
	int i,j,t;
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
}
void disp(int a[],int b)
{
	int i;
	cout<<"sorted array is";
	for(i=0;i<b;i++)
	{
		cout<<a[i]<<endl;
	}
}
