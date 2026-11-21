#include <iostream>
#include <string.h>
using namespace std;
class S{
	public:
		char a[100];
S(char x[])
{
	strcpy(a,x);
}
S(S &S1,S &S2)
{
	strcpy(a,S1.a);
	strcat(a," ");
	strcat(a,S2.a);
}
void disp()
{
	cout<<a;
}
};
int main()
{
	S S1("hello");
	S S2("World");
	S S3(S1,S2);
	
	S3.disp();
}
