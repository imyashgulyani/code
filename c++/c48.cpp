#include <iostream>
using namespace std;
class book
{
	public:
		int n;
		char a[100],c[100];
};

int main()
{
	book b1,b2;
	cout<<"enter number of pages,enter name of book,enter name of author";
	cin>>b1.n>>b1.a>>b1.c;
	cin>>b2.n>>b2.a>>b2.c;
	cout<<"number of pages in book are "<<b1.n<<endl;
	cout<<"the name of book is "<<b1.a<<endl;
	cout<<"the name of author"<<b1.c<<endl;
	cout<<"________________________________________________________________________________________________"<<endl;
	cout<<"number of pages in book are "<<b2.n<<endl;
	cout<<"the name of book is "<<b2.a<<endl;
	cout<<"the name of author "<<b2.c<<endl;
}
