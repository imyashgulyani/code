#include <iostream>
#include <math.h>
using namespace std;
class node{
    public:
    int info_1,info_2;
    node *NEXT,*PREV;
};
node  *NEW,*LAST;
node* createlist()
{
    node *START=NULL;
    int i,N;
    cout<<"enter size of list";
    cin>>N;
    cout<<"enter "<<N<<"numbers"<<endl;
    for(i=1;i<=N;i++)
    {
        NEW=new node();
        cout<<"enter number";
        cin>>NEW->info_1;
        cin>>NEW->info_2;
        if(START==NULL)
        {
            START=NEW;
        }
        else{
            LAST->NEXT=NEW;
        }
        LAST=NEW;
    }
    LAST->NEXT=NULL;
    return START;
}
void disp(node *TEMP)
{
    while(TEMP->NEXT!=NULL)
    {
        cout<<TEMP->info_1<<"x"<<TEMP->info_2<<"+";
        TEMP=TEMP->NEXT;
    }
    cout<<TEMP->info_1<<"x"<<TEMP->info_2<<endl;
}
node* add(node *TEMP1,node *TEMP2)
{
    node *START=NULL;
    while(TEMP1!=NULL)
    {
        NEW=new node();
        NEW->info_1=TEMP1->info_1+TEMP2->info_1;
        NEW->info_2=TEMP1->info_2;
        if(START==NULL)
        {
            START=NEW;
        }
        else
        {
            LAST->NEXT=NEW;
        }
        LAST=NEW;
    
        
    
   
        TEMP1=TEMP1->NEXT;
        TEMP2=TEMP2->NEXT;
    }
    LAST->NEXT=NULL;
    return START;

}
int main()
{
    node *List1,*List2,*List3=NULL;
    cout<<"enter value in list 1"<<endl;
   List1=createlist();
   cout<<"enter value in list 2"<<endl;
   List2=createlist();
   cout<<"Display first List"<<endl;
   disp(List1);
   cout<<"Display second List"<<endl;
   disp(List2);
   List3=add(List1,List2);
   cout<<"display of third list is"<<endl;
   disp(List3);

}