#include <iostream>
#include <process.h>
#include <conio.h>
using namespace std;
class node{
	public:
	int info;
	node *next;
};
node *NEW,*start=NULL,*last;
void create_list()
{
	int n;
	cout<<"enter size of list";
	cin>>n;
	cout<<"enter "<<n<<" numbers"<<endl;
	for(int i=1;i<=n;i++)
	{
		NEW=new node();
		cout<<"enter number";
		cin>>NEW->info;
		if(start==NULL)
		{
			start=NEW;
		}
		else
		{
			last->next=NEW;
		}
		last=NEW;
	}
	last->next=NULL;
}
node *getnode()
{
	node *TEMP;
	TEMP=start;
	while(TEMP->next!=NULL)
	{
		TEMP=TEMP->next;
	}
	return TEMP;
}
void ins_beg()
{
	NEW=new node();
	cout<<"enter number";
	cin>>NEW->info;
	NEW->next=start;
	start=NEW;
}
void ins_end()
{
	node *TEMP;
	if(start==NULL){
		ins_beg();
		return;
	}
	NEW=new node();
	cout<<"enter number";
	cin>>NEW->info;
	TEMP=getnode();
	TEMP->next=NEW;
	NEW->next=NULL;
}
void del_beg()
{
	if(start==NULL)
	{
		cout<<"empty list";
		return;
	}
	node *TEMP=start;
	start=TEMP->next;
	delete TEMP;
}
void del_end()
{
	if(start==NULL)
	{
		cout<<"empty list";
		return;
	}
	node *TEMP,*ptr;
	while(TEMP->next!=NULL)
	{
		ptr=TEMP;
		TEMP=TEMP->next;
	}
	ptr->next=NULL;
	delete TEMP;
}
void ins_des()
{
	int a,i;
	cout<<"enter desired location";
	cin>>a;
	if(a==1)
	{
		ins_beg();
		return;
	}
	NEW=new node();
	cout<<"enter number";
	cin>>NEW->info;
	node *TEMP=start;
	for(i=1;i<=a-2;i++)
	{
		TEMP=TEMP->next;
		if(TEMP==NULL)
		{
			cout<<"not applicable";
			return;
		}
		NEW->next=TEMP->next;
		TEMP->next=NEW;
	}
}
void del_des()
{
	int i,a;
	cout<<"enter position";
	cin>>a;
	node *TEMP=start,*ptr=NULL;
	if(a==1)
	{
		del_beg();
		return;
	}
	for(i=1;i<=a-1;i++)
	{
		ptr=TEMP;
		TEMP=TEMP->next;
		if(TEMP==NULL)
		{
			cout<<"invalid choice";
			return;
		}
	}
	ptr->next=TEMP->next;
	delete TEMP;
}
void search()
{
	int a,i,flag=0;
	node *TEMP=start;
	cout<<"enter number to be searched";
	cin>>a;
	
	while(TEMP!=NULL)
	{
		if(TEMP->info==a)
		{
			flag=1;
			break;
		}
		TEMP=TEMP->next;
	}
	if(flag==1)
	{
		cout<<"the number "<<a<<" is in the list"<<endl;
	}
	else
	{
		cout<<"the number in not in the list";
	}
}
void disp()
{
	node *temp;
	temp=start;
	while(temp!=NULL)
	{
		cout<<temp->info<<endl;
		temp=temp->next;
	}
}
int main()
{
	create_list();
    int ch;
    while(1)
    {
		system("cls");
	    cout<<"1 for Beginning(insert)"<<endl;
	    cout<<"2 for End(insert)"<<endl;
	    cout<<"3 for Beginning(delete)"<<endl;
	    cout<<"4 for End(delete)"<<endl;
	    cout<<"5 for Desired position"<<endl;
	    cout<<"6 for Delete at desired position"<<endl;
	    cout<<"7 for display"<<endl;
	    cout<<"Enter choice: "<<endl;
	    cin>>ch;
		switch(ch){
			case 1:
				ins_beg();
				break;
			case 2:
				ins_end();
				break;
			case 3:
				del_beg();
				break;
			case 4:
				del_end();
				break;
			case 5:
				ins_des();
				break;
			case 6:
				del_des();
				break;
			case 7:
				search();
			case 8:
				disp();
				break;
			default:
				cout<<"invalid choice";	
				exit(0);	
		}
		getch();
	}
}
