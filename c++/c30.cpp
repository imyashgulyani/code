#include <iostream>
using namespace std;
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter number";
		cin>>a[i];
	}
}
int finding_number(int a[],int n,int b)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[50],n,b,i;
	cout<<"enter size of array\n";
	cin>>n;
	cout<<"enter "<<n<<" numbers\n";

	input(a,n);
	cout<<"enter number to be searched";
	cin>>b;
	i=finding_number(a,n,b);
	if(i!=-1)
	{
		cout<<"the number is present in array at "<<i<<" position";
	}
	else
	{
		cout<<"the number you are searching is not in array";
	}
}
