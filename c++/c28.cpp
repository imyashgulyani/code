#include <iostream>
using namespace std;
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
	int i,c=0;
	for(i=2;i<=100;i++)
	{
		if(prime_number(i))
		{
			c++;
			cout<<"prime number is "<<i<<endl;
		}
	}
	cout<<"total prime nos are : "<<c;
}
