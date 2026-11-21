#include <stdio.h>
struct book
{
	char a[100],c[100];
	int p;
}b1,b2;
typedef struct book book;
void disp(book,book);
int main()
{
	printf("author,name and pages are as follows");
	disp(b1,b2);
}
void disp(book x,book y)
{
	book b1={"let us c","gaurav",300};
	book b2={"hello world","yash",400};
	printf("%s %s %d\n",b1.a,b1.c,b1.p);
	printf("%s %s %d\n",b2.a,b2.c,b2.p);
}
