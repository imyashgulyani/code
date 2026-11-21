import java.util.*;
class node{
    int data;
    node next;
    node(int data)
    {
        this.data=data;
        this.next=null;
    }
}
public class test {
    Scanner ob=new Scanner(System.in);
    node first=null,NEW,last;
    void createlist()
    {
        System.out.print("enter number of elements in list");
        int n=ob.nextInt();
        System.out.print("enter "+n +" numbers");
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
            }
                last=NEW;
        }
        last.next=null;
    }
    void ins_beg()
    {
        System.out.print("enter number to be inserted");
        int a;
        a=ob.nextInt();
        node NEW=new node(a);
        NEW.next=first;
        first=NEW;
    }
    void max()
    {
        int max=0;
        node temp=first;
        while(temp!=null)
        {
            if(temp.data>=max)
            {
                max=temp.data;
            }
        }
    }
}
