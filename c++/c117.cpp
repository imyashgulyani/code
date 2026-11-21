#include <iostream>
using namespace std;
int main()
{
int i,n,sum=0,array[100];
cin>>n;
for(i=0;i<n;i++)
{
	cin>>array[i];
}
for(i=0;i<n;i++)
{
	sum=sum+array[i];
}
cout<<sum;
}
