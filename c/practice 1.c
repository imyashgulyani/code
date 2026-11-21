#include <stdio.h>
struct employee
{
	float empl_number,basic;
	char name[100];
};
int main()
{
	 struct employee b[2];
	int i;
	float HRA,DA,conv,total;
	printf("enter name,employee number,basic");
	for(i=0;i<2;i++)
	{
		scanf("%s%f%f",b[i].name,&b[i].empl_number,&b[i].basic);
	}
	printf("employ name,employee number,basic,HRA,DA,conv,total are\n");
	for(i=0;i<2;i++)
	{
		HRA=0.2*b[i].basic;
	    DA=0.15*b[i].basic;
	    conv=0.1*b[i].basic;
	    total=HRA+DA+conv+b[i].basic;
		printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",b[i].name,b[i].empl_number,b[i].basic,HRA,DA,conv,total);
	}
}
