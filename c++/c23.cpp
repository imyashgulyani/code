#include <iostream>
using namespace std;
int main()
{
	int i,j,a=65,n;
	cout<<"enter a number";
	cin>>n;
	for(i=65;i<=n;i++)
	{
		for(j=65;j<i;j++)
		{
			cout<<" ";
		}
		for(j=i;j<=n;j++)
		{
			cout<<char(j);
		}
		for(j=n-1;j>=i;j--)
		{
			cout<<char(j);
		}
		cout<<"\n";
	}
}
