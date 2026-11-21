import java.util.*;
    class node{
        int data;
        node prev;
        node next;
        node(int data)
        {
            this.data=data;
            this.prev=null;
            this.next=null;
        }

    }
public class basic_doubly {
    Scanner ob=new Scanner(System.in);
    node first=null,NEW,last;
    void createlist()
    {
        System.out.print("enter number of elements in list");
        int n=ob.nextInt();
        System.out.print("enter "+n +"elements");
        System.out.println();
        int i;
        for(i=0;i<n;i++)
        {
            System.out.print("enter number");
            System.out.println();
            NEW=new node(ob.nextInt());
            if(first==null)
            {
                first=NEW;
            }
            else
            {
                last.next=NEW;
                NEW.prev=last;
            }
            last=NEW;
        }
        if(last!=null)
        {
            last.next=null;
        }
    }
    void display()
    {
        node temp=first;
        while(temp!=null)
        {
            System.out.print(" "+temp.data);
            temp=temp.next;
        }
    }
    node getlastnode()
    {
        node temp=first;
        while(temp.next!=null)
        {
            temp=temp.next;
        }
        return temp;
    }
    void reverse()
    {
        node last=getlastnode();
        node temp=last;
        while(temp!=null)
        {
            System.out.print(" "+temp.data);
            temp=temp.prev;
        }
    }
    void ins_beg()
    {
        System.out.print("enter number to be printed at begening");
        int n=ob.nextInt();
        NEW=new node(n);
        if(first==null)
        {
            first=NEW;
            last=NEW;
            NEW.next=null;
            NEW.prev=null;
        }
        else
        {
            NEW.next=first;
            first.prev=NEW;
            first=NEW;
            NEW.prev=null;
        }
    }
    void ins_end()
    {
        last=getlastnode();
        System.out.print("enter number to be printed at end");
        int n=ob.nextInt();
        NEW=new node(n);
        if(first==null)
        {
            first=NEW;
            last=NEW;
            NEW.next=null;
            NEW.prev=null;
        }
        else
        {
            last.next=NEW;
            NEW.prev=last;
            last=NEW;
            NEW.next=null;
        }
    }
    void ins_des()
    {
        System.out.print("enter number to be printed at desired position");
        int n=ob.nextInt();
        System.out.print("enter position");
        int a=ob.nextInt();
        NEW=new node(n);
        if(first==null)
        {
            first=NEW;
            last=NEW;
            NEW.next=null;
            NEW.prev=null;
        }
        else if(a==1)
        {
            NEW.next=first;
            first.prev=NEW;
            first=NEW;
            NEW.prev=null;
        }
        else
        {
            node temp=first;
            int i;
            for(i=1;i<a-1 && temp!=null;i++)
            {
                temp=temp.next;
            }
            NEW.next=temp;
            NEW.prev=temp.prev;
            temp.prev.next=NEW;
            temp.prev=NEW;
        }
    }
    void del_beg()
    {
        if(first==null)
        {
            System.out.print("the list is empty");
        }
        else
        {
            first=first.next;
            first.prev=null;
        }
    }
    void del_end()
    {
        last=getlastnode();
        if(first==null)
        {
            System.out.print("the list is empty");
        }
        else
        {
            last=last.prev;
            last.next=null;
        }
    }
    void del_des()
    {
        System.out.print("enter position to be deleted");
        int n=ob.nextInt();
        if(first==null)
        {
            System.out.print("the list is empty");
        }
        else if(n==1)
        {
            first=first.next;
            first.prev=null;
        }
        else
        {
            node temp=first;
            int i;
            for(i=0;i<n-1;i++)
            {
                temp=temp.next;
            }
            temp=temp.prev;
            temp.next=temp.next.next;
            temp.next.prev=temp;
        }
    }
    public static void main(String[] args)
    {
        basic_doubly a=new basic_doubly();
        a.createlist();
        a.display();
        a.reverse();
        a.display();
        a.ins_beg();
        a.display();
        a.ins_end();
        a.display();
        a.ins_des();
        a.display();
        a.del_beg();
        a.display();
        a.del_beg();
        a.display();
        a.del_end();
        a.display();
        a.del_des();
        a.display();
    }
}
