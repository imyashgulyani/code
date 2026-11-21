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
void max_min_list(node *l)
{
	int max=l->info,min=l->info;
	while(l!=NULL)
	{
		if(l->info>max)
		{
			max=l->info;
		}
		if(l->info<min)
		{
			min=l->info;
		}
		l=l->next;
	}
	cout<<"max value is ="<<max<<endl;
	cout<<"min value is ="<<min<<endl;
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
	max_min_list(start);
	disp();
}
