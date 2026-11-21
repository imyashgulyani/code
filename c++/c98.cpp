#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char n[100];
	fstream file("book.cpp",ios::in);
	char ch;
	while(1)
	{
		file.get(ch);
		if(file.eof())
		{
			break;
		}
		cout<<ch;
	}
	file.close();
}
