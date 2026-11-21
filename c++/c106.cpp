#include <iostream>
#include <process.h>
#include<conio.h>
using namespace std;
class A
{
	int a[50],b,i;
	public:
		void input()
		{
			cout<<"enter how many numbers you will input"<<endl;
			cin>>b;
			cout<<"enter numbers in array"<<endl;
			for(i=0;i<b;i++)
			{
				cin>>a[i];
			}
		}
		void insert_begining()
		{
			int c;
			cout<<"enter number to be put at begining";
			cin>>c;
			for(i=b;i>0;i--)
			{
				a[i]=a[i-1];
			}
			a[0]=c;
			b++;
		}
		void desired_position()
		{
			int c,d;
			cout<<"enter your desired position";
			cin>>d;
			cout<<"enter number to be put at desired position";
			cin>>c;
			for(i=b;i>d-1;i--)
			{
				a[i]=a[i-1];
			}
			a[d-1]=c;
			b++;
		}
		void insert_end()
		{
			int c;
			cout<<"enter value to insert at end";
			cin>>c;
			a[b]=c;
			b++;
		}
		void delete_begining()
		{
			for(i=0;i<b;i++)
			{
				a[i]=a[i+1];
			}
			b--;
		}
		void delete_desired()
		{
			int d;
			cout<<"enter desired position";
			cin>>d;
			for(i=d-1;i<b-1;i++)
			{
				a[i]=a[i+1];
			}
			b--;
		}
		void delete_end()
		{
			b--;
		}
		void disp()
		{
			for(i=0;i<b;i++)
			{
				cout<<a[i];
				cout<<endl;
			}
		}
		void search()
		{
			int f;
			bool flag=false;
			cout<<"enter number to be searched";
			cin>>f;
			for(i=0;i<b;i++)
			{
				if(a[i]==f)
				{
					flag=true;
					break;
				}
			}
			if(flag)
			{
				cout<<"the number you searched for is in array";
			}
			else
			{
				cout<<"the number is not in array";
			}
		}
};
int main()
{
	A A1;
	int e;
	
	A1.input();
	while(1)
	{
		system("cls");
		cout<<"enter value(1 for begining, 2 for desired position, 3 for end position,4 for deletion at begining,5 for deletion at desired position and 6 to delete at end)";
		cin>>e;
		switch(e)
		{
		case 1:
	        A1.insert_begining();
	        break;
		case 2:
		    A1.desired_position();	
		    break;
		case 3:
		    A1.insert_end();	
		    break;
		case 4:
			A1.delete_begining();
			break;
		case 5:
			A1.delete_desired();
			break;
		case 6:
			A1.delete_end();
			break;
		default:
		    cout<<"enter between 1,2,3,4,5 or 6";
		    exit(0);
	    }
    	A1.disp();
    	A1.search();
    	getch();
    }
}
