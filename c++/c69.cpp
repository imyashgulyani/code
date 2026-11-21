#include <iostream>
#include<string.h>
using namespace std;
class str
{
	char s[100];
	public:
		str(char *x)
		{
			strcpy(s,x);
			
		}
		str(str x1,str x2)
		{
			strcpy(s,x1.s);
			strcat(s,x2.s);
		}
		void disp()
		{
			cout<<s<<endl;
		}
    };
        int main()
        {
        	str s1("HELLO"),s2("WORLD");
        	str s3(s1,s2);
        	s1.disp();
        	s2.disp();
        	s3.disp();
		}

