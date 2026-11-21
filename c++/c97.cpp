#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char n[100],a[100];
	int p;
	ofstream ofil;
	ofil.open("book.cpp");
	cout<<"enter name,enter author,enter pages";
	cin>>n>>a>>p;
	ofil<<n<<" "<<a<<" "<<p<<endl;
	ofil.close();
	ifstream ifil("book.cpp");
	ifil>>n>>a>>p;
	cout<<n<<" "<<a<<" "<<p<<endl;
	ifil.close();
}
