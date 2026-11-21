#include <iostream>
#include<string.h>
using namespace std;
class employee
{
	private:
		int salary,empID;
	    string name;
	    
	public:
		static int count;
		employee(int b,int c,string a)
		{
			name=a;
			salary=b;
			empID=c;
			count++;
		}
		employee(employee & e3)
		{
			name=e3.name;
			salary=e3.salary;
			empID=e3.empID;
			count++;
		}
		int sal()
		{
			return salary;
		}
		int emp_ID()
		{
			return empID;
		}
		string namee()
		{
			return name;
		}

		~employee()
		{
			salary=0;
			empID=0;
			name="";
			cout<<"Destructor invoked"<<endl;
		}
	void calc()
	{
		int a;
		cin>>a;
		if(a<50 && a>0)
		{
			cout<<"new salary is ="<<salary+salary*a*0.01<<endl;
		}
		else
		{
			cout<<"enter salary between 0 and 50";
		}
	}
	void disp()
	{
		cout<<"salary ="<<sal()<<"ID is ="<<emp_ID()<<"name is "<<namee()<<endl;
	}
};
int employee::count;
int main()
{
	
	employee e1(50000,1,"gaurav");
	employee e2(60000,2,"yaksh");
	employee e3(70000,3,"gautam");
	employee e4=e1;
	e1.disp();
	e2.disp();
	e3.disp();
	e4.disp();
	cout<<"enter percentage for increment";
	e1.calc();
	e2.calc();
	e3.calc();
	e4.calc();
	cout<<"No of objects are   :   "<<employee::count;
}

