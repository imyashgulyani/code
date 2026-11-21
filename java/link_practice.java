import java.util.*;
public class link_practice {
    Scanner ob=new Scanner(System.in);
    class node {
        int data;
        node next;
        node(int data)
        {
            this.data=data;
        }
    }
    node first=null,last,NEW;
    void createlist()
    {

        System.out.print("enter size of list");
        int a;
        a=ob.nextInt();
        int i;
        System.out.print("enter "+a+" numbers");
        for(i=0;i<a;i++)
        {
            NEW=new node(ob.nextInt());
            if(first==null)
            {
                first=NEW;
            }
            else
            {
                last.next=NEW;
            }
            last=NEW;
        }
        last.next=null;
    }
    void reverse()
    {
        node prevnode,temp,nextnode;
        prevnode=null;
        temp=first;
        while(temp!=null)
        {
            nextnode=temp.next;
            temp.next=prevnode;
            prevnode=temp;
            temp=nextnode;
        }
        first=prevnode;
    }
    void copy1(link_practice l1)
    {
        node temp=l1.first;
        while(temp!=null)
        {
            NEW=new node(temp.data);
            if(first==null)
            {
                first=NEW;
            }
            else
            {
                last.next=NEW;
            }
            last=NEW;
            temp=temp.next;
        }
        last.next=null;
    }
    void add(link_practice l1,link_practice l2)
    {
        node temp1=l1.first;
        node temp2=l2.first;
        while(temp1!=null && temp2!=null)
        {
            NEW=new node(temp1.data+temp2.data);
            if(first==null)
            {
                first=NEW;
            }
            else
            {
                last.next=NEW;
            }
            last=NEW;
            temp1=temp1.next;
            temp2=temp2.next;
        }
        last.next=null;
    }
    void display()
    {
        node temp=first;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public static void main(String [] args)
    {
        link_practice l1=new link_practice();
        link_practice l2=new link_practice();
        link_practice l3=new link_practice();
        l1.createlist();
        l2.copy1(l1);
        l2.reverse();
        l3.add(l1,l2);
        l3.display();
    }
}
