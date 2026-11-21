#include <iostream>
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
};
int main()
{
	int i;
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
}
