#include <iostream>
using namespace std;
int b[10],c[10],j=0,k=0;
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter numbers";
		cin>>a[i];
	}
}
void posneg(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
}
void disp(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<x[i]<<"  ";
	}
}
int main()
{
	int a[50],n;
	cout<<"enter size of array\n";
	cin>>n;
	cout<<"enter "<<n<<" numbers\n";
	input (a,n);
	posneg(a,n);
	cout<<"output  :  "<<endl;
	disp(b,j);
	disp(c,k);
}
