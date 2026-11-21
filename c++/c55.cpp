#include <iostream>
#include<stdio.h>
using namespace std;
class student
{
	char name[10];
	int roll_number,physics,maths,chemistry;
	public:
		void input();
		void disp();
};
void student::input()
{
	fflush(stdin);
	cin>>name;
	fflush(stdin);
	cin>>roll_number>>physics>>maths>>chemistry;
}
void student::disp()
{
	cout<<name<<"\t"<<roll_number<<"\t"<<physics<<"\t"<<maths<<"\t"<<chemistry<<endl;
}
int main()
{
	int i;
	student a[2];
	cout<<"enter name,enter roll number,enter marks of physics,enter marks of maths,enter marks of chemistry";
	for(i=0;i<2;i++)
	{
		a[i].input();
	}
	cout<<"display is "<<endl<<endl;
	for(i=0;i<2;i++)
	{
		a[i].disp();
	}
	
}
