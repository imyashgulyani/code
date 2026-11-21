#include <iostream>
uisng namespace std;
int main()
{
	result1=max(max1);
	result2=avg(average/count);
}
int addstudent()
{
	cout<<"enter count of students";
	cin>>c;
	cout<<"enter ids and names simuntaneously for a particular student";
	for(i=0;i<c;i++)
	{
		cin>>ids[i];
		cin>>names[i];
	}
}
int inputmarks()
{
	int i,j;
	cout<<"enter subject and marks for a particular students";
	for(i=0;i<c;i++)
	{
		for(j=0;j<10;j++)
		{
			cin>>subjects[i][j];
			cin>>marks[i][j];
		}
	}
}
int max()
{
	int max=0,average,maximum[100];
	for(i=0;i<c;i++)
	{
		for(j=0;j<10;j++)
		{
			if(marks[i][j]>max)
			{
				max=marks[i][j];
			}
		}
		cout<<"maximum marks for first student in all 10 subjects is ="<<max;
		maximum[i]=max;
	}
	int max1=0
	for(i=0;i<count;i++)
	{
		if(maximum[i]>max1)
		{
			max1=maximum;
		}
	}
	return max1;
}
int avg()
{
	int avg[100],average=0;
	for(i=0;i<count;i++)
	{
		int sum=0
		for(j=0;j<10;j++)
		{
			sum=sum+marks[i][j];
		}
		cout<<"average of student 1 for all subjects is ="<<(sum)/10;
		avg[i]=sum;
	}
	for(i=0;i<count;i++)
	{
		average=average+avg[i];
	}
	return average/count;
}
int disp()
{
	cout<<"the average for all students is = "<<result2<<endl;
	cout<<"the maximum marks for all students is ="<<result1;
}
int searchstudent()
{
	int i,j,m,flag=0;
	cout<<"enter marks of student to be searched";
	cin>>m;
	for(i=0;i<c;i++)
	{
		for(j=0;j<10;j++)
		{
			if(m==marks[i][j])
			{
				flag=1;
				break;
			}
		}
	}
}
