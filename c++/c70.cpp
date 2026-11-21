r#include <iostream>
#include <string.h>
using namespace std;
class student
{
	protected:
	int a;
	char b[100];
	public:
	void getdata()
	{
		cout<<"enter roll number";
		cin>>a;
		cout<<"enter name";
		cin>>b;
	}
};
class test:public student
{
	protected:
	int p,c,m;
	public:
		void input()
		{
			cout<<"enter marks of physics,chmeistry and maths";
			cin>>p>>c>>m;
		}
		void disp()
		{
			cout<<"marks of physics "<<p<<"marks of chemistry"<<c<<"marks of maths"<<m;
		}
    };
class result:public test
{
	int total;
	public:
		void totalmarks()
		{
			total=p+c+m;
			cout<<"Total Marks  :  "<<total<<endl;
		}
		
    };
        int main()
        {
        	
        	result b1;
        	b1.getdata();
        	b1.input();
        	b1.disp();
        	b1.totalmarks();
		}
