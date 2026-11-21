#include <stdio.h>
struct book
{
	char n[100];
	struct author
	{
		char a[100];
		int p;
	}A1;
}b1,b2;
typedef struct book book;
void disp(book,book);
void disp(book x,book y)
{
	book b1={"let us c","yash",300};
	book b2={"hello world","gaurav",400};
	printf("%s %s %d\n",b1.n,b1.A1.a,b1.A1.p);
	printf("%s %s %d",b2.n,b2.A1.a,b2.A1.p);
}
int main()
{
	printf("comment,author name and pages are as follows \n");
	disp(b1,b2);
}
