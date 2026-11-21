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
	book b1,b2;
	cout<<"enter name,enter author,enter pages";
	b1.input();
	b2.input();
	cout<<"display name,display name,display pages\n";
	b1.disp();
	b2.disp();
}
