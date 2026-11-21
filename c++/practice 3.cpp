#include <stdio.h>
struct book
{
	char a[100],n[100];
	int p;
}b1,b2;
typedef struct book book;
int main()
{
	book b1={"let us c","gaurav",300};
	book b2={"hello world","yash",400};
	printf("comment,name and pages");
	printf("%s\t%s\t%d",b1.a,b1.n,b1.p);
    printf("%s\t%s\t%d",b2.a,b2.n,b2.p);
}
