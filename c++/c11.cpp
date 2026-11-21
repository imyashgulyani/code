#include <iostream>
using namespace std;
class node
{
    public:
    int info;
    node *NEXT;
};
node *NEW,*START=NULL,*LAST;
void createlist()
{
    int i,n;
    cout<<"enter size of list";
    cin>>n;
    cout<<"enter "<<n<<" number"<<endl;
    for(i=0;i<n;i++)
    {
        NEW= new node();
        cout<<"enter numbers";
        cin>>NEW->info;
        if(START==NULL)
        {
            START=NEW;
        }
        else
        {
            LAST->NEXT=NEW;
        }
        LAST=NEW;
    }
    LAST->NEXT=START;
}
void disp()
{
    node *TEMP;
    TEMP=START;
    do
    {
        cout<<TEMP->info<<endl;
        TEMP=TEMP->NEXT;
    }while(TEMP!=START);
}
node* getnode()
{
    node *TEMP;
    TEMP=START;
    while(TEMP->NEXT!=START)
    {
        TEMP=TEMP->NEXT;
    }
    return TEMP;
}
void ins_beg()
{
    NEW=new node;
    cout<<"enter number at begining";
    cin>>NEW->info;
    NEW->NEXT=START;
    if(START!=NULL)
    {
        LAST=getnode();
        LAST->NEXT=NEW;
    }
    START=NEW;
}
void ins_end()
{
    NEW=new node;
    cout<<"enter number at end";
    cin>>NEW->info;
    LAST=getnode();
    LAST->NEXT=NEW;
}
int main()
{
    createlist();
    ins_beg();
    ins_end();
    disp();
}
    