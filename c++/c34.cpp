#include <iostream>
using namespace std;
void input(int[][5],int);
void disp(int[][5],int);
void addition(int[][5],int[][5],int[][5],int);
int main()
{
	int a[5][5],b[5][5],c[5][5],n;
	cout<<"Enter size of matrix";
	cin>>n;
	cout<<"enter numbers in matrix a :";
	input(a,n);
	cout<<"enter numbers in matrix b  : ";
	input(b,n);
	addition(a,b,c,n);
	
	cout<<"Display Matrix a\n";
	disp(a,n);
	cout<<"Display Matrix b\n";
	disp(b,n);
	cout<<"Matrix ADDITION\n ";
	disp(c,n);
	
}
void input(int x[][5],int n)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}
}
void addition(int a[][5],int b[][5],int c[][5],int n)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void disp(int x[][5],int n)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
