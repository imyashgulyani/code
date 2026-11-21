#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class book
{
	int p;
	char a[100],n[100],c[100];
	public:
	void getdata()
	{
		cin>>p>>a>>n;
	}
	void disp()
	{
		cout<<p<<"  "<<a<<"  "<<n<<endl;
	}
	int search(char c[])
	{
		if(strcmp(c,n)==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int main()
{
	book b[100];
	int i,n,t=0;
	char c[100];
	cout<<"enter how many books to be taken";
	cin>>n;
	for(i=0;i<n;i++)
	{
		b[i].getdata();
	}
	cout<<"Display all info"<<endl;
	for(i=0;i<n;i++)
	{
		b[i].disp();
	}
	cout<<"enter name of book to be searched";
	cin>>c;
	for(i=0;i<n;i++)
	{
		if(b[i].search(c)==1)
		{
			b[i].disp();
			t++;
			break;
		}
	}
	if(t==0)
	{
		cout<<"there is no such book";
	}
}
