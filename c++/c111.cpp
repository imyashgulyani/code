#include <iostream>
using namespace std;
void input(int a[], int &b);
void calc(int a[], int b);
void disp(int a[], int b);
void binarysearch(int a[],int b);
int main()
{
	int a[100],b;
	input(a,b);
	calc(a,b);
	disp(a,b);
	binarysearch(a,b);
}
void input(int a[],int &b)
{
	int i,data;
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
void binarysearch(int a[],int b)
{
	int mid,lb,ub,data,flag=0;
	cout<<"enter number to search";
	cin>>data;
	lb=0;
	ub=b-1;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==data)
		{
			flag=1;
			break;
		}
		if(data>a[mid])
		{
			lb=mid+1;
		}
		else
		ub=mid-1;
	}
	if(flag)
	{
		cout<<"data is found";
	}
	else
	{
		cout<<"data not found";
	}
}
