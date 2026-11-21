#include <iostream>
#include <string>
#include <fstream>
#include <process.h>
using namespace std;
class student{
	int p,c,m,total;
	char name[100];
	public:
		void input();
		void calc();
		void disp();
};
void student::input()
{
	cout<<"enter marks of physics,chemistry and maths and name";
	cin>>p>>c>>m>>name;
}
void student::calc()
{
	total=p+c+m;
}
void student::disp()
{
	cout<<name<<" "<<total<<endl;
}
int main()
{
	student S1;
	fstream file("student.cpp",ios::out|ios::binary);
	if(file==NULL)
	{
		cout<<"can't open the file";
		exit(0);
	}
	for(int i=0;i<2;i++)
	{
		S1.input();
		S1.calc();
	    file.write((char*)&S1,sizeof(S1));
	}
	file.close();
	file.open("student.cpp",ios::in|ios::binary);
	file.seekg(0);
	
	cout<<"Display all records"<<endl;
	while(file.read((char*)&S1,sizeof(S1)))
	{
	    S1.disp();
	}
	return 0;
}
