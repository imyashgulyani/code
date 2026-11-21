#include <iostream>
#include <stdlib.h>
using namespace std;
class node
{
    public:
    int info;
    node *NEXT,*PREV;
};
node *NEW,*START=NULL,*LAST;
void display()
{
    node *TEMP;
    TEMP=START;
    while(TEMP!=NULL)
    {
        cout<<TEMP->info<<endl;
        TEMP=TEMP->NEXT;
    }
}

void createlist()
{
    int i,n;
    cout<<"enter size of list";
    cin>>n;
    cout<<"enter "<<n<<" numbers"<<endl;
    for(i=0;i<n;i++)
    {
        NEW=new node();
        cout<<"enter number";

        cin>>NEW->info;
        if(START==NULL)
        {
            START=NEW;
            START->PREV=NULL;
        }
        else
        {
            LAST->NEXT=NEW;
            NEW->PREV=LAST;
        }
        LAST=NEW;
    }
    LAST->NEXT=NULL;
    display();
}
void ins_end()
{
    NEW=new node();
    cout<<"enter number at end";
    cin>>NEW->info;
    NEW->NEXT = NULL;
    NEW->PREV = LAST;   
    LAST->NEXT = NEW;   
    LAST = NEW;
}
void ins_beg()
{
    NEW=new node;
    cout<<"enter number at begining";
    cin>>NEW->info;
    NEW->PREV=NULL;
    NEW->NEXT=START;
    START->PREV=NEW;
    START=NEW;
}
void del_beg()
{
    node *TEMP=START;
    if(START==NULL)
    {
        cout<<"empty list";
    }
    START=TEMP->NEXT;
    START->PREV=NULL;
    delete(TEMP);
}
void rev_list()
{
     node *TEMP;
    TEMP=LAST;
    while(TEMP!=NULL)
    {
        cout<<TEMP->info<<endl;
        TEMP=TEMP->PREV;
    }
}
void del_end()
{
    node *TEMP,*ptr;
    if(START==NULL)
    {
        cout<<"empty list";
        return;
    }
    while(TEMP->NEXT!=NULL)
    {
        ptr=TEMP;
        TEMP=TEMP->NEXT;
    }
    ptr->NEXT=NULL;
    delete(TEMP);
}
void ins_despos()
{
    int a,i;
    node *TEMP=START;
    cout<<"enter desired position";
    cin>>a;
    if(a==1)
    {
        ins_beg();
        return;
    }
    NEW=new node;
    cout<<"enter number";
    cin>>NEW->info;
    for(i=1;i<=a-2;i++)
    {
        TEMP=TEMP->NEXT;
        if(TEMP==NULL)
        {
            cout<<"not applicable";
            return;
        }
    }
    NEW->NEXT=TEMP->NEXT;
    NEW->PREV=TEMP; 
    TEMP->NEXT=NEW;
    if(NEW->NEXT!=NULL)
    {
        NEW->NEXT->PREV=TEMP;
    }
}
void del_despos()
{
    int a,i;
    node*TEMP=START;
    if(START==NULL)
    {
        cout<<"the is list is empty";
        return;
    }
    cout<<"enter desired position";
    cin>>a;
    if(a==1)
    {
        del_beg();
    }
    for(i=1;i<a;i++)
    {
        TEMP=TEMP->NEXT;
        if(TEMP==NULL)
        {
            cout<<"invalid position";
        }
    }
    if(TEMP->NEXT!=NULL)
        TEMP->NEXT->PREV=TEMP->PREV;
    
    TEMP->PREV->NEXT=TEMP->NEXT;
    delete TEMP;

}
int main() 
{
    createlist();
    while(1)
    {
        int l;
        cout<<"enter 1 to reverse the list"<<endl;
        cout<<"enter 2 to insert at begining"<<endl;
        cout<<"enter 3 to insert at end"<<endl;
        cout<<"enter 4 to delete at begining"<<endl;
        cout<<"enter 5 to delete at end"<<endl;
        cout<<"enter 6 to insert at desired position"<<endl;
        cout<<"enter 7 to delete from desired position"<<endl;
        cout<<"enter 8 for display"<<endl;
        cout<<endl;
        cout<<"enter preference"<<endl;
        cin>>l;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        switch(l)
        {
            case 1:
            {
                rev_list();
                break;
            }
            case 2:
            {
                ins_beg();
                break;
            }
            case 3:
            {
                ins_end();
                break;
            }
            case 4:
            {
                del_beg();
                break;
            }
            case 5:
            {
                del_end();
                break;
            }
            case 6:
            {
                ins_despos();
                break;
            }
            case 7:
            {
                del_despos();
                break;
            }
            case 8:
            {
                display();
                break;
            }
        default:
            cout<<"Wrong choice";
            exit(0);
        }
    }
}