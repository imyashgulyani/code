#include <iostream>
using namespace std;
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"enter number";
		cin>>a[i];
	}
}
int prime_number(int x)
{
   int i;
   for(i=2;i<=x/2;i++)
   {
	   if(x%i==0)
	    	return 0;
   }
	
    return 1;
	
}
int main()
{
	int a[50],n,c=0;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter "<<n<<" nos\n";
	input(a,n);
	for(int i=0;i<n;i++)
	{
		if(prime_number(a[i]))
		{
			c++;
			cout<<"prime number is "<<a[i]<<endl;
		}
	}
	cout<<"total prime nos are : "<<c;
}

