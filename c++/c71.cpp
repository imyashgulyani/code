#include <iostream>
using namespace std;
int main()
{
	int b=0,i,flag=1;
	char a[100];
	cout<<"enter a string";
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		b++;
	}
	for(i=0;i<b/2;i++)
	{
		if(a[i]!=a[b-i-1])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"the number is not palindrome";
	}
	else
	{
		cout<<"the number is palindrome";
	}
	
}
