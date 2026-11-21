#include <iostream>
using namespace std;
int main()
{
	int n,product=1;
	cout<<"enter a number";
	cin>>n;
    while(n>0)
    {
    	product=product*n;
    	n--;
	}
	cout<<"the factorial = "<<product;
	return 0;
}
