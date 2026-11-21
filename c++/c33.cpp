#include <iostream>
using namespace std;
int j=0;
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter numbers";
		cin>>a[i];
	}
}
int* positive(int a[],int n)
{
	int i,b[5];
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			b[j]=a[i];
			j++;
		}
	}
	return b;
}
void disp(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
}
int main()
{
	int a[50],*b,n;
	cout<<"enter size of array\n";
	cin>>n;
	cout<<"enter "<<n<<" numbers\n";
	input (a,n);
	b=positive(a,n);
	
	disp(b,j);
	
	return 0;	
}
