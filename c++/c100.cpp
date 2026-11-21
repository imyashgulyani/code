#include <iostream>
#include <string>
#include <fstream>
#include<process.h>
using namespace std;
class emp
{
	int code,basic;
	char name[100];
	public:
		void input();
		void disp();
};
void emp::input()
{
	cout<<"enter code,name and basic";
	cin>>code>>name>>basic;
	

}
void emp::disp()
{
	cout<<code<<" "<<name<<" "<<basic<<endl;
}
int main()
{
	emp E1;
	fstream file("employee.cpp",ios::out|ios::binary);
	if(file==NULL)
	{
		cout<<"can't open the file";
		exit(0);
	}
	for(int i=0;i<2;i++)
	{
		E1.input();
	    file.write((char*)&E1,sizeof(E1));
	}
	file.close();
	file.open("employee.cpp",ios::in|ios::binary);
	file.seekg(0);
	
	cout<<"Display all records"<<endl;
	while(file.read((char*)&E1,sizeof(E1)))
	{
	    E1.disp();	
	}
	return 0;
}
