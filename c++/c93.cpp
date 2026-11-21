#include <iostream>
using namespace std;
int fact(int c)
{
	int d=1,j;
		for(j=c;j>=1;j--)
		{
			d=d*j;
		}
		return d;
}
int calc(int x,int n)
{
	int a=0,c,i,j;
	for(i=1;i<=n;i++)
	{
		
		a=a+fact(x+i)/(i+1);
	}
	return a;
}
int main()
{
	int x,n;
	cout<<"enter value for x"<<endl;
	cin>>x;
	cout<<"enter value of n"<<endl;
	cin>>n;
	int b=calc(x,n);
	cout<<"final value is"<<b;
	return 0;
}

