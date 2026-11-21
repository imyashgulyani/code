#include <iostream>
using namespace std;
int prime()
{
	int a,c=0,i;
	for(a=2;a<=100;a++)
	{
		int b=0;
		for(i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				b++;
			}
		}
	    if(b==2)
	    {
	    	cout<<a<<endl;
	    }
	}
}
int main()
{
	prime();
	return 0;
}

