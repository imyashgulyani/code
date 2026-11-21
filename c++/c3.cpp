#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter year";
	cin>>a;
	if(a%400==0)
	{
		cout<<"the year is leap year";
	}
	else if(a%100!=0 && a%4==0)
	{
		cout<<"the year is leap year";
	}
	else
	{
		cout<<"the year is not leap year";
	}
	return 0;
}
