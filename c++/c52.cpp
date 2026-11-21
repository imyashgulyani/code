#include <iostream>
#include <string.h>
using namespace std;
class book
{
	char n[10],a[20];
	int p;
	public:
		void input()
		{
			cin>>n>>a>>p;
		}
		void disp()
		{
			cout<<n<<"\t"<<a<<"\t"<<p<<endl;
		}
		int search(char *t)
		{
			
			if(strcmp(n,t)==0)
			{
				return 1;
			}
			return 0;
			
		}
};
int main()
{
	int i,flag=0;
	book b[2];
	cout<<"enter name,enter author,enter pages";
	for(i=0;i<2;i++)
	{
		b[i].input();
	}
	cout<<"display name,display name,display pages\n";
	for(i=0;i<2;i++)
	{
		b[i].disp();
	}
	char t[10];
	cout<<"enter book name to be searched";
	cin>>t;
	for(i=0;i<2;i++)
	{
		flag=b[i].search(t);
		if(flag)
		{
			b[i].disp();
			break;
		}
	}
	if(flag==0)
	{
		cout<<"value not found";
	}
	
}
