#include <iostream>
#include <string>
using namespace std;
class A
{
	public:
		string a,b;
	A(string s1,string s2)
	{
		if(s1=="HELLO")
		{
			a="HELLO";
		}
		if(s2=="WORLD")
		{
			b="WORLD";
		}
	}
	A(A &A1,A &A2)
	{
		strcpy(a,A1.a);
		strcpy(b,A1.b);
		strcpy(A2.a,"he");
		strcat(A2.a,"wo");
		strcpy(A2.b,"llo");
		strcat(A2.b,"rld");
		
	}
	void disp()
	{
		cout<<A1.a;
		cout<<A1.b;
		cout<<A2.a;
		cout<<A2.b;
	}
};
int main()
{
	A A1("HELLO","WORLD");
	A1.disp(A1,A2);
}
