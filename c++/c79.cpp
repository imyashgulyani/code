#include <iostream>
using namespace std;
class student
{
	public:
		int a;
		char b[100];
		void getdata()
		{
			cout<<"enter roll number"<<endl;
			cin>>a;
			cout<<"enter name";
			cin>>b;
		}		
   };
class test:virtual public student
{
	public:
		int c,d,e;
		void getmarks()
		{
			cout<<"enter marks of physics,chemistry and maths";
			cin>>c>>d>>e;
		}
    };
class sports:virtual public student
{
	public:
		int f;
		void getsports()
		{
			cout<<"enter score";
			cin>>f;
		}
    };
class result:public test,public sports
{
	public:
		int r;
		void disp()
		{
			r=c+d+e+f;
			cout<<"the final result is "<<r;
		}
    };
	int main()
	{
	    result r1;	
	    r1.getdata();
	    r1.getmarks();
	    r1.getsports();
	    r1.disp();
	} 
