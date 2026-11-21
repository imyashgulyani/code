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
int sum_list(node *l)
{
	int sum=0;
	while(l!=NULL)
	{
		sum=sum+l->info;
		l=l->next;
	}
	return sum;	
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
	cout<<"total of all numbers is = "<<sum_list(start)<<endl;
	disp();
}
