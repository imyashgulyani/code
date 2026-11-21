#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(j=i-1;j>0;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
}
