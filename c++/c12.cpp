#include <stdio.h>
int main()
{
	char a[100],d[100];
	int b;
	float c;
	printf("enter name,enter age,enter height,enter grade");
	scanf("%s\t%d\t%f\t%s",&a,&b,&c,d);
	printf("NAME : %s\nAGE : %d\nHEIGHT : %f\nGRADE : %s",a,b,c,d);
}
