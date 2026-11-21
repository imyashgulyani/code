#include <iostream>
using namespace std;
void input(int a[][5],int n);
void disp(int a[][5],int n);
void sum(int a[][5],int n);
int main()
{
	int a[5][5],b[5][5],c[5][5],n;
	cout<<"enter size of matrix";
	cin>>n;
	cout<<"enter numbers in matrix a";
	input(a,n);
	sum(a,n);
	cout<<"\nDisplay Matrix a\n";
	disp(a,n);
	return 0;
}
void input(int x[][5],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>x[i][j];
		}
	}
}
void sum(int a[][5],int n)
{
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==n-1)
			{
				sum=sum+a[i][j];
			}
		}
	}
	cout<<"addition of first and last row is "<<sum;
}
void disp(int x[][5],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
