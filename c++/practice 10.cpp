#include <iostream>
using namespace std;
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
	int a,b;
	cout<<"enter two integers";
	cin>>a>>b;
	cout<<"addition is = "<<add(a,b)<<endl;
	cout<<"subtraction is = "<<sub(a,b)<<endl;
	cout<<"multiplication is = "<<mul(a,b)<<endl;
	cout<<"division is = "<<div(a,b)<<endl;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	if(a>b)
	return a/b;
	else
	return b/a;
}

