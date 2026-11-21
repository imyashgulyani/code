#include <stdio.h>
struct student
{
	char n[100];
	int marks;
	struct DOB
	{
		int date,month,year;
	}A1;	
}b1;
typedef struct student student;
void disp(student);
void disp(student x)
{
	student b1={"yash",100,01,06,25};
	printf("%s %d %d %d %d",b1.n,b1.marks,b1.A1.date,b1.A1.month,b1.A1.year);
}
int main()
{
	printf("name,marks and date of birth is as follows\n");
	disp(b1);
}
