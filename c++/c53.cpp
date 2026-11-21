#include <iostream>
#include <string.h>
using namespace std;
class student
{
	char n[100];
	int roll_number,physics,maths,chemistry;
	public:
		void input()
		{
			cin>>n>>roll_number>>physics>>maths>>chemistry;
		}
		void disp()
		{
			cout<<n<<"\t"<<roll_number<<"\t"<<physics<<"\t"<<maths<<"\t"<<chemistry<<"\t"<<endl;
		}
		int search(char *t)
		{
			if(strcmp(n,t)==0)
			{
				return 1;
			}
			return 0;
		}
};
int main()
{
	int i,flag=0;
	student b[2];
	cout<<"enter name,enter roll number,enter marks of physics,enter marks,enter chemistry";
	for(i=0;i<2;i++)
	{
		b[i].input();
	}
	cout<<"display name,display roll number,display marks of phyics,display marks of matrhs,display marks of chemistry\n";
	for(i=0;i<2;i++)
	{
		b[i].disp();
	}
	char t[100];
	cout<<"enter student name to be searched";
	cin>>t;
	for(i=0;i<2;i++)
	{
		flag=b[i].search(t);
		if(flag)
		{
			b[i].disp();
			break;
		}
	}
	if(flag==0)
	{
		cout<<"value not found";
	}
}
