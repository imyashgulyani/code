#include <iostream>
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
int search_list(node*l)
{
	int flag=0;
	int data;
	cout<<"enter number to be searched";
	cin>>data;
	while(l!=NULL)
	{
		if(data==l->info)
		{
			flag=1;
			cout<<"the number is found";
			break;
		}
		l=l->next;
	}
	if(flag==0)
	{
		cout<<"number not found";
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
	search_list(start);
	cout<<endl;
	disp();
}
