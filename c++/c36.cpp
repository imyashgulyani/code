#include <iostream>
using namespace std;
int calc(int a,int b);
int main()
{
	int a,b,result;
	cout<<"enter two numbers for HCF";
	cin>>a>>b;
	result=calc(a,b);
	cout<<"the HCF is "<<result;
}
int calc(int a,int b)
{
	int i,hcf;
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;
		}
	}
	return hcf;
	
}
