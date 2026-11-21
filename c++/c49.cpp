#include <iostream>
using namespace std;
class student
{
	public:
		int n;
		char a[100],c[100];
};
void input(student b[])
{
	int i;
	for(i=0;i<2;i++)
	{
		cin>>b[i].n>>b[i].a>>b[i].c;
	}
}
void disp(student b[])
{
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"number of pages are "<<b[i].n<<endl;
		cout<<"name of books is "<<b[i].a<<endl;
		cout<<"the name of author is "<<b[i].c<<endl;
	}
	
}
int main()
{
	student b[2];
	printf("enter pages,enter name of book,enter name of author");
	input(b);
	disp (b);
}
