#include <iostream>
using namespace std;
int main()
{
	int a[50],n,sum=0,i;
	cout<<"enter number of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter number";
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"sum is"<<sum;
}
