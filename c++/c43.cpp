#include <iostream>
using namespace std;
void input(int a[][5],int n);
void disp(int a[][5],int n);
void multiplication(int a[][5],int b[][5],int c[][5],int n);
int main()
{
	int a[5][5],b[5][5],c[5][5],n;
	cout<<"enter size of matrix";
	cin>>n;
	cout<<"enter numbers in matrix a";
	input(a,n);
	cout<<"enter numbers in matrix b";
	input(b,n);
	multiplication(a,b,c,n);
	cout<<"Display Matrix a\n";
	disp(a,n);
	cout<<"Display Matrix b\n";
	disp(b,n);
	cout<<"Matrix MULTIPLICATION\n";
	disp(c,n);
	
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
void multiplication(int a[][5],int b[][5],int c[][5],int n)
{
	int i,j,k,sum=0;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
	    {
	    	sum=0;
		    for(j=0;j<n;j++)
		    {
			    sum=sum+a[k][j]*b[j][i];
			    
		    }
		    c[k][i]=sum;
	    }
	}
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
