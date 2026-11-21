#include <iostream>
using namespace std;
int main()
{
	int a[50],b,i;
	cout<<"enter total numbers to be put in array"<<endl;
	cin>>b;
	cout<<"enter number in arrays";
	for(i=0;i<b;i++)
	{
		cin>>a[i];
	}
	int c=a[0];
	for(i=0;i<b;i++)
	{
		if(a[i]>c)
		{
			c=a[i];
		}
	}
	cout<<c;
}
